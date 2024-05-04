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
        string s;
        cin >> s;
        int n = s.size();
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                z++;
            else
                o++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && o > 0)
                o--;
            else if (s[i] == '1' && z > 0)
                z--;
            else
                break;
        }
        cout << o + z << endl;
    }
}
