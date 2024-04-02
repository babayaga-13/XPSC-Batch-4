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
    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> a(n);
    vector<ll> b(m);

    for (int i = 0; i < n; ++i)
      cin >> a[i];

    for (int i = 0; i < m; ++i)
      cin >> b[i];

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    ll total = 0, i = 0;
    while (i < a.size() && i < b.size())
    {
      ll c = min(b[i] * h, a[i]);
      total += c;
      i++;
    }
    cout << total << endl;
  }

  return 0;
}
