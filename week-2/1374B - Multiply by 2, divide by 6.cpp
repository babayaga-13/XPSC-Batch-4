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
    if (sum > s)
    {
      while (sum > s)
      {
        sum -= a[i];
        i++;
      }
      ans = max(ans, j - i + 1);
    }
    ans = max(ans, j - i + 1);
    j++;
  }
  cout << ans << endl;
}
