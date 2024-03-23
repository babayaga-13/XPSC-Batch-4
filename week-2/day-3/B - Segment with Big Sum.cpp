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
  ll sum = 0, ans = 1e18 + 6;
  while (j < n)
  {
    sum += a[j];
    while (sum >= s)
    {
      ans = min(ans, j - i + 1);
      sum -= a[i];
      i++;
    }
    j++;
  }
  if (ans == 1e18 + 6)
    cout << "-1";
  else
    cout << ans << endl;
}
