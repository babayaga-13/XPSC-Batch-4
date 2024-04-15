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
        vector<ll> a(n);
        ll xo = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            xo ^= a[i];
        }
        if (n % 2 == 0)
        {
            if (!xo)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << xo << endl;
        }
    }

    return 0;
}
