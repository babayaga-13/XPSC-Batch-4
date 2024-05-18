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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(k + 1, 0), b(k + 1, 0);
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        for (int i = 1; i <= k; i++)
            cin >> b[i];
        while (q--)
        {
            int z;
            cin >> z;
            auto x = lower_bound(a.begin(), a.end(), z);
            int xb = x - a.begin() - 1;

            int ans = b[xb] + (z - a[xb]) * 1.0 * (b[xb + 1] - b[xb]) / (a[xb + 1] - a[xb]);
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
