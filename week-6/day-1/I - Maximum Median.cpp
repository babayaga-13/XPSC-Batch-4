#include <bits/stdc++.h>
#define ll long long
using namespace std;

typedef vector<ll> vi;

bool fun(ll x, vi &a, ll k)
{
    ll sum = 0;
    for (size_t i = a.size() / 2; i < a.size(); i++)
    {
        if (x > a[i])
        {
            sum += x - a[i];
        }
    }
    return sum <= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vi a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll st = 1, en = 1e12 + 1;
    while (st < en)
    {
        ll mid = st + (en - st) / 2;
        if (!fun(mid, a, k))
        {
            en = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    cout << st - 1 << endl;
    return 0;
}
