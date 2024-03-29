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
        string s;
        cin >> s;
        string x;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int sz = unique(s.begin(), s.end()) - s.begin();
        for (int i = 0; i < sz; i++)
            x += s[i];
        if (x == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
