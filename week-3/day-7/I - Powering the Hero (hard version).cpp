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
        priority_queue<int, vector<int>> pq;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(x);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
