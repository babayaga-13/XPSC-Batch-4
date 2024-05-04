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
        cin >> n;
        vector<ll> c(n + 1, 0);
        set<int> s;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
            {
                s.insert(x);
                mp[x]++;
            }
        }
        for (auto u : s)
        {
            for (int j = u; j <= n; j += u)
            {
                c[j] += mp[u];
            }
        }
        cout << *max_element(c.begin(), c.end()) << "\n";
    }
    return 0;
}
