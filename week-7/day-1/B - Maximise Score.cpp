#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector < int > a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int cur_ans = 0;
            for (int j: {i - 1,i + 1})
            {
                if (j < 0 || j >= n)
                    continue;

                cur_ans = max(cur_ans, abs(a[i] - a[j]));
            }

            ans = min(ans, cur_ans);
        }

        cout << ans << "\n";
    }

    return 0;
}
