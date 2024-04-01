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
        int n;
        cin >> n;
        int a[n];
        map<int, int> f;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }
        int ans = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            int val = a[i];
            if (f[val] != 0)
            {
                ans++;
                while (f[val] > 0)
                {
                    f[val]--;
                    val++;
                }
            }
        }
        cout << ans << endl;
    }
}
