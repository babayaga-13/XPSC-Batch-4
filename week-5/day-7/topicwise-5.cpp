#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        vector<ll> p;
        ll sum = 0;
        p.push_back(0);

        for (int i = n - 1; i >= 0; i--)
        {
            sum += a[i];
            p.push_back(sum);
        }

        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(p.begin(), p.end(), x);
            if (it == p.end())
                cout << "-1\n";
            else
                cout << it - p.begin() << endl;
        }
    }
}
