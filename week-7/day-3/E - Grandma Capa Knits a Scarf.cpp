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
        string s;
        cin >> s;
        int ans = n + 1;
        for (int i = 0; i < 26; i++)
        {
            int c = 0;
            char x = 'a';
            int l = 0, h = n - 1;
            while (l <= h)
            {
                if (s[l] == s[h])
                {
                    l++;
                    h--;
                }
                else if (s[l] == x + i)
                {
                    l++;
                    c++;
                }
                else if (s[h] == x + i)
                {
                    h--;
                    c++;
                }
                else
                {
                    c = n + 1;
                    break;
                }
            }
            ans = min(ans, c);
        }
        if (ans == n + 1)
            cout << "-1\n";
        else
            cout << ans << endl;
    }
}
