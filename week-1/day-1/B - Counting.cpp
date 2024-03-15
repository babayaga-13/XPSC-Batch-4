#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, h, x;
    cin >> l >> h;
    x = (h - l + 1);
    if (x < 1)
        cout << '0';
    else
        cout << x;
}
