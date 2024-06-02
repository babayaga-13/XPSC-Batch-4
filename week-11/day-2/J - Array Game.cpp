#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (k >= 3)
        {
            cout << "0\n";
            continue;
        }
        sort(v.begin(), v.end());
        ll d = v[0];
        for (int i = 0; i < n - 1; i++)
            d = min(d, v[i + 1] - v[i]);
        if (k == 1)
        {
            cout << d << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < i; j++)
            {
                int x = v[i] - v[j];
                int p = lower_bound(begin(v), end(v), x) - begin(v);
                if (p < n)
                    d = min(d, v[p] - x);
                if (p > 0)
                    d = min(d, x - v[p - 1]);
            }
        cout << d << endl;
    }
    return 0;
}
