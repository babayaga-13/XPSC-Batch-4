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
        int x, N = 32768;
        cin >> x;
        int ans = 16;
        for (int i = 0; i <= 15; i++)
        {
            int n = x + i, c = 0;
            while (true)
            {
                if (n % N == 0)
                    break;
                n *= 2;
                c++;
            }
            ans = min(ans, c + i);
        }
        cout << ans << " ";
    }

    return 0;
}
