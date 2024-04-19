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
        long long int a, b, c, sum = 0, sum1 = 0;
        cin >> a >> b >> c;
        sum = abs(b - c);
        sum = sum + (c - 1);
        sum1 = abs(a - 1);
        if (sum == sum1)
            cout << 3 << endl;
        else if (sum > sum1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}
