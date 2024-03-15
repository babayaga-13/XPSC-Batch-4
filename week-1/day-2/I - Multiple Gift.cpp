#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y, c = 0;
    cin >> x >> y;
    ll m = x;
    while (m <= y)
    {
        m = m * 2;
        c++;
    }
    cout << c;
}
