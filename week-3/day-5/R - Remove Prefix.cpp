#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<int> a(n);
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
      if (mp[a[i]] == 0)
      {
        mp[a[i]]++;
      }
      else
      {
        break;
      }
    }
    cout << n - mp.size() << endl;
  }
}
