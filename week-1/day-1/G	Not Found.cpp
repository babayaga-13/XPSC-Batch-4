#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool a[26] = {false};
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 'a';
        if (a[x] == false)
        {
            a[x] = true;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == false)
        {
            char c = 'a' + i;
            cout << c;
            return 0;
        }
    }
    cout << "None";
    return 0;
}
