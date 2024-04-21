#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 1; i < (1 << n); i++)
    {
        vector<ll> res;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                res.push_back(a[j]);
            }
        }
        sort(res.begin(), res.end());

        ll sum = 0;
        for (ll f = 0; f < res.size(); f++)
        {
            sum += res[f];
        }

        if (sum >= l && sum <= r && (res[res.size() - 1] - res[0]) >= x)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
