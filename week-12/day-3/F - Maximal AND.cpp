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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int c = 0;
            for (int j = 0; j < n; j++)
            {
                if (!(v[j] & (1 << i)))
                    c++;
            }
            if (c <= k)
            {
                k -= c;
                ans ^= (1 << i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
