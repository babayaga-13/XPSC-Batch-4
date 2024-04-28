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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        for (ll i = 0; i < m; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        a[0] = n - a[0];
        for (ll i = 1; i < m; i++)
        {
            a[i] = a[i - 1] + (n - a[i]);
        }
        auto it = lower_bound(a.begin(), a.end(), n);
        cout << it - a.begin() << endl;
    }
}
