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
        int n, k;
        cin >> n >> k;
        vector<ll> pos, neg;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 0)
            {
                pos.push_back(x);
            }
            else
            {
                neg.push_back(-x);
            }
        }

        sort(pos.rbegin(), pos.rend());
        sort(neg.rbegin(), neg.rend());

        ll sum1 = 0, sum2 = 0;

        for (int i = 0; i < pos.size(); i += k)
        {
            sum1 += pos[i];
        }

        for (int i = 0; i < neg.size(); i += k)
        {
            sum2 += neg[i];
        }

        ll max_distance = 0;
        if (!pos.empty())
        {
            max_distance = max(max_distance, pos[0]);
        }
        if (!neg.empty())
        {
            max_distance = max(max_distance, neg[0]);
        }
        ll ans = 2 * (sum1 + sum2) - max_distance;
        cout << ans << endl;
    }
    return 0;
}
