#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int result = min(a / i, b / (n - i));
        ans = max(ans, result);
    }
    cout << ans;
}
