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
        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<string> s;
        for (int i = 0; i < n; i++)
            s.insert(a[i]);

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            int f = 0;
            for (int j = 0; j < a[i].size(); j++)
            {
                if (s.count(a[i].substr(0, j)) == 1 and s.count(a[i].substr(j)) == 1)
                    f = 1;
            }
            if (f == 1)
                ans += '1';
            else
                ans += '0';
        }
        cout << ans << endl;
    }
}
