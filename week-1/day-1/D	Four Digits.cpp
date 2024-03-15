#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n / 10 == 0)
        cout << "000" << n;
    else if (n / 100 == 0)
        cout << "00" << n;
    else if (n / 1000 == 0)
        cout << "0" << n;
    else
        cout << n;
}
