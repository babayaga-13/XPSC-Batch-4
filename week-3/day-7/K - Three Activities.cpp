#include <iostream>
#include <vector>
#include <algorithm>

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
        int n;
        cin >> n;
        vector<pair<ll, ll>> a(n), b(n), c(n);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            c[i] = {x, i};
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        ll ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
