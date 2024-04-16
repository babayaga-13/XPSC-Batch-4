#include <bits/stdc++.h>
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
        ll n, ans = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<bool> vis(n , false);
        for (int j = 31; j >= 0; j--)
        {
            ll count = 0;
            for (int i = 0; i < n; i++)
            {
                if ((1 << j) & (v[i]) && !vis[i])
                {
                    count++;
                    vis[i] = true;
                }
            }
            ans += (count * (count - 1)) / 2;
        }
        cout << ans << endl;
    }
}
