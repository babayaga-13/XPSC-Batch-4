#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ln cout << endl
#define all(v) v.begin(), v.end()
#define count_one(x) __builtin_popcount(x)
#define trailing_zero(x) __builtin_ctz(x)
#define leading_zero(x) __builtin_clz(x)
#define gcd __gcd
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1e9 + 7;
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
ll power(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n % 2)
            ans = (ans * a) % N, n--;
        else
            a = (a * a) % N, n /= 2;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n + 2);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    int x = 0;
    for (int i = 0; i < n; i += 2)
    {
        b[i] = a[x++];
    }
    for (int i = 1; i < n; i += 2)
    {
        b[i] = a[x++];
    }
    b[n] = b[0];
    b[n + 1] = b[1];
    bool isZigzag = true;
    for (int i = 1; i <= n; i++)
    {
        if (!((b[i] > b[i - 1] && b[i] > b[i + 1]) || (b[i] < b[i - 1] && b[i] < b[i + 1])))
        {
            no;
            return;
        }
    }
    yes;
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    ln;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
