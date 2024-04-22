#include <bits/stdc++.h>
#define ll long long
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
        ll n, k, c = 0;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = x + i + 1;
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            k -= v[i];
            if (k >= 0)
                c++;
            else
                break;
        }
        cout << c << endl;
    }
}
