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
        int n, f = 0;
        cin >> n;
        map<ll, ll> mp;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (x > n || mp[x] > 1)
                v.push_back(x);
        }
        ll ans = v.size();
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (mp[i + 1] == 0)
            {
                ll x = v.back();
                v.pop_back();
                ll y = i + 1;
                if (x % (x - y) == y)
                    continue;
                else
                {
                    f++;
                    cout << "-1\n";
                    break;
                }
            }
        }
        if (f == 0)
            cout << ans << endl;
    }
}
