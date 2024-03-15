#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    while (c > 0)
    {
        if (c % b == 0)
        {
            cout << "YES";
            return 0;
        }
        c -= a;
    }
    if (c == 0)
        cout << "YES";
    else
        cout << c << "No";
    return 0;
}
