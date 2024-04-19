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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int x = s / n;
        if (x < a)
        {
            s -= (x * n);
        }
        else
            s -= (a * n);
        if (s <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
