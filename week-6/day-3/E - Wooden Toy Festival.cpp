#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool Possible(vector<ll> a, ll n, ll x)
{
    int cnt = 1;
    for (int l = 0, r = l + 1; r < n;)
    {
        if (a[l] + x + x >= a[r])
        {
            r++;
        }
        else
        {
            cnt++;
            l = r;
            r = l;
        }
    }
    return (cnt < 4);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll ans;
        ll l = 0, h = 1000000000000000;
        while (l <= h)
        {
            ll mid = (h + l) / 2;

            if (Possible(a, n, mid))
            {
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
