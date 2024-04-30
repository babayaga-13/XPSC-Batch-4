#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool Possible(vector<int> a, int n, int k)
{
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }

    for (int i = 1; i <= k; i++)
    {
        if (s.empty())
            return false;
        int check = k - i + 1;
        auto it = s.upper_bound(check);
        if (it == s.begin())
            return false;
        it--;

        s.erase(it);
        if (!s.empty())
        {
            it = s.begin();
            ll v = (*it);
            v += (check);
            s.erase(it);
            s.insert(v);
        }
    }
    return true;
}

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans;
        int l = 0, h = n;
        while (l <= h)
        {
            int mid = (h + l) / 2;
            if (Possible(a, n, mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
