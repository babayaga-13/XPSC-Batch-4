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
        ll n, q, m = 0;
        cin >> n >> q;
        vector<ll> a(n), b(n + 1, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            b[i] = a[i - 1] + b[i - 1];
        for (int i = 0; i < n; i++)
        {
            m = max(m, a[i]);
            a[i] = m;
        }
        while (q--)
        {
            ll x;
            cin >> x;
            auto it = upper_bound(a.begin(), a.end(), x);
            ll y = it - a.begin();
            cout << b[y] << " ";
        }
        cout << endl;
    }
}
