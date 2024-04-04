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
        vector<int> s;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0 && !s.empty())
            {
                ans += s.back();
                s.pop_back();
            }
            else
            {
                s.push_back(x);
                sort(s.begin(), s.end());
            }
        }
        cout << ans << endl;
    }

    return 0;
}
