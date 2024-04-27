#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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
        ll x;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, h = 1e10;
        while (l < h)
        {
            ll mid = (h + l + 1) / 2;
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < mid)
                    sum += mid - a[i];
            }
            if (sum <= x)
            {
                l = mid;
            }
            else
            {
                h = mid - 1;
            }
        }
        cout << l << endl;
    }
}
