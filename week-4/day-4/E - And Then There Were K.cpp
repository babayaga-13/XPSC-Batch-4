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
        int p = 1;
        while (2 * p <= n)
        {
            p <<= 1;
        }
        cout << p - 1 << endl;
    }
}
