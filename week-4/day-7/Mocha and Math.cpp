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
        int x;
        cin >> x;
        n--;
        while (n--)
        {
            int y;
            cin >> y;
            x &= y;
        }
        cout << x << endl;
    }
    return 0;
}
