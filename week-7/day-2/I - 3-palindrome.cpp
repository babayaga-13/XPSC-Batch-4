#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    int f = 0;
    while (s.size() != n)
    {
        if (f == 0 || f == 1)
        {
            s += 'a';
            f++;
        }
        else if (f == 2 || f == 3)
        {
            s += 'b';
            f++;
            if (f == 4)
                f = 0;
        }
    }
    cout << s;
}
