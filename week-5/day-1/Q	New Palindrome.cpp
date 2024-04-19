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
        string s;
        cin >> s;
        int x, c = 0;
        x = s.size();
        if (x % 2 == 0)
        {
            for (int i = 1; i <= (x / 2); i++)
                if (s[i] != s[i - 1])
                    c++;
        }
        else
        {
            for (int i = 1; i < ((x - 1) / 2); i++)
                if (s[i] != s[i - 1])
                    c++;
        }
        if (c > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
