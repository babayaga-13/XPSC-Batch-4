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
        int n, k;
        cin >> n >> k;
        ll l = 1, h = INT_MAX, ans = 0;
        while (l <= h)
        {
            ll mid = (l + h) / 2;
            int count = (mid - mid / n);
            if (count > k)
                h = mid - 1;
            else if (count < k)
                l = mid + 1;
            else
            {
                ans = mid;
                h = mid - 1;
            }
        }
        cout << ans << endl;
    }
}
