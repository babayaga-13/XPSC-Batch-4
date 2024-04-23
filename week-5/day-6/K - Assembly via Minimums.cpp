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
        int m = n * (n - 1) / 2;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < m; i += n)
        {
            cout << v[i] << " ";
            n--;
        }
        cout << "1000000000\n";
    }
}
