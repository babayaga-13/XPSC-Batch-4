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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pbds<int> p;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p.insert(x);
            int a = p.order_of_key(x + 1);
            ans += (p.size() - a);
        }
        cout << ans << endl;
    }
    return 0;
}
