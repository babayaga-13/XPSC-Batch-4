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
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pbds<int> p;
        for (int i = 0; i < k; i++)
            p.insert(a[i]);

        ll sum = 0;
        int pos = (k + 1) / 2 - 1;

        int old = *p.find_by_order(pos);
        for (auto u : p)
        {
            sum += abs(u - old);
        }
        cout << sum << " ";

        for (int i = 0; i < n - k; i++)
        {
            p.erase(p.find_by_order(p.order_of_key(a[i])));
            p.insert(a[i + k]);

            int m = *p.find_by_order(pos);
            sum += (abs(m - a[i + k]) - abs(old - a[i]));
            if (k % 2 == 0)
                sum -= (m - old);
            old = m;
            cout << sum << " ";
        }
    }
    return 0;
}
