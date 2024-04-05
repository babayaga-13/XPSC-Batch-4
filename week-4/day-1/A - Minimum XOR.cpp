#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int ans = a[0];
        int p = a[0];
        for (int i = 1; i < n; ++i)
        {
            ans ^= a[i];
            p = min(p, a[i]);
        }

        int mx = ans;
        if (p == 0)
        {
            mx = 0;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                int temp = ans ^ a[i];
                mx = min(mx, temp);
            }
        }

        cout << mx << endl;
    }

    return 0;
}
