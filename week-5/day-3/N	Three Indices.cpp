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
        int n, f = 0;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n - 1; ++i)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << "YES" << endl;
                cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
                f++;
                break;
            }
        }
        if (f == 0)
            cout << "NO\n";
    }
}
