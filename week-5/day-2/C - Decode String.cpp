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
        string s, ans;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            char a = 'a';
            if (s[i + 2] == '0' && s[i + 3] != '0' && i + 2 < n)
            {
                int x = (s[i] - '0');
                int y = (s[i + 1] - '0');
                ans += (a + x * 10 + y - 1);
                i += 2;
            }
            else
                ans += (a + (s[i] - '0') - 1);
        }
        cout << ans << endl;
    }
}
