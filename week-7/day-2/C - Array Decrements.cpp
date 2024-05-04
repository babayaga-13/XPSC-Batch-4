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
        int diff = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            diff = max(diff, a[i] - b[i]);
        }

        string ans = "YES\n";
        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                ans = "NO\n";
                break;
            }
            else if ((a[i] - b[i]) != diff && b[i] != 0)
            {
                ans = "NO\n";
                break;
            }
        }
        cout << ans;
    }
}
