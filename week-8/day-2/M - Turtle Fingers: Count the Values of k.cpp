#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> s;
        for (ll i = 0; i <= 21; i++)
        {
            ll x = pow(a, i);
            if (x > l)
                break;
            for (ll j = 0; j <= 21; j++)
            {
                ll y = pow(b, j);
                if (y > l)
                    break;
                ll m = x * y;
                if (l % m == 0)
                    s.insert(m);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}
