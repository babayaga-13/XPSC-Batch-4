#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, s;
  cin >> n >> s;
  ll a[n];
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  ll i = 0, j = 0;
  ll sum = 0, ans = 0;
  while (j < n)
  {
    sum += a[j];
    while (sum >= s)
    {
      ans += n - j;
      sum -= a[i];
      i++;
    }
    j++;
  }
  cout << ans;
}
