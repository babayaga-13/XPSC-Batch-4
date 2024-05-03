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
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        string ans = "YES\n";
        for (int i = 0; i < n; i++)
        {
            if ((b[i] - a[i] )> 1||(b[i] - a[i] )<0)
            {
                ans = "NO\n";
                break;
            }
        }
        cout << ans;
    }
}
