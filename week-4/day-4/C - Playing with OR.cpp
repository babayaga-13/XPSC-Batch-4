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

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0;
        for (int i = 0; i <= n - k; i++)
        {
            for (int j = i; j < i + k; j++)
            {
                if (a[j] % 2 != 0)
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
