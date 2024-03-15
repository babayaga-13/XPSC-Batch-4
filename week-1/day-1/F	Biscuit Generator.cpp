#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    int ans = (t / a) * b;
    cout << ans;
}
