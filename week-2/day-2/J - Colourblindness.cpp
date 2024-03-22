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
    int n, c = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
      if ((a[i] == 'R' && b[i] != 'R') || (b[i] == 'R' && a[i] != 'R'))
      {
        c++;
        cout << "NO" << endl;
        break;
      }
    }
    if (c == 0)
      cout << "YES" << endl;
  }
}
