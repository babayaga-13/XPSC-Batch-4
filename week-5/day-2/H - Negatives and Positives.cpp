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
        ll n, c = 0, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] <= 0)
            {
                a[i] *= (-1);
                c++;
            }
        }
        sort(a, a + n);
        if (c % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * a[0] << endl;
    }
}
