#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        map<ll, vector<int>> m;
        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            m[x].push_back(i);
        }

        while (q--)
        {
            ll a, b;
            cin >> a >> b;

            if (m[a].size() == 0 || m[b].size() == 0)
                cout << "NO" << endl;
            else
            {
                if (m[a].front() < m[b].back())
                    cout << "YES" << endl;
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
