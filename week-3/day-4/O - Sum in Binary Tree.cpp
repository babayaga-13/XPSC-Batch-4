#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    ll n, s = 0;
    cin >> n;
    while (n >= 1)
    {
      s += n;
      n = n / 2;
    }
    cout << s << endl;
  }
}
