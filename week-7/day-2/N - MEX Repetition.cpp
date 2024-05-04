#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n + 1);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        a[n] = ((n * (n + 1)) / 2 - sum);

        // ll x = k % (n + 1);
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << a[(i - x + n + 1) % (n + 1)] << " ";
        // }

        ll r = k % (n + 1);
        reverse(a.begin(), a.end());
        reverse(a.begin(), a.begin() + r);
        reverse(a.begin() + r, a.end());
        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
