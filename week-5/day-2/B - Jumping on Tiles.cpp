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
        string x;
        cin >> x;
        int n = x.size();
        vector<ll> v(n);
        vector<pair<ll, ll>> pair;
        for (int i = 0; i < n; ++i)
        {
            v[i] = x[i] - 'a' + 1;
        }
        if (v[0] <= v[n - 1])
        {
            for (int i = 1; i < n - 1; ++i)
            {
                if (v[i] >= v[0] && v[i] <= v[n - 1])
                {
                    pair.push_back({v[i], i + 1});
                }
            }
            sort(pair.begin(), pair.end());
            cout << (v[n - 1] - v[0]) << " " << pair.size() + 2 << endl;
            cout << 1 << " ";
            for (int i = 0; i < pair.size(); ++i)
            {
                cout << pair[i].second << " ";
            }
            cout << n << endl;
        }
        else
        {
            for (int i = 1; i < n - 1; ++i)
            {
                if (v[i] <= v[0] && v[i] >= v[n - 1])
                {
                    pair.push_back({v[i], i + 1});
                }
            }
            sort((pair).rbegin(), pair.rend());
            cout << (v[0] - v[n - 1]) << " " << pair.size() + 2 << endl;
            cout << 1 << " ";
            for (int i = 0; i < pair.size(); ++i)
            {
                cout << pair[i].second << " ";
            }
            cout << n << endl;
        }
    }
}
