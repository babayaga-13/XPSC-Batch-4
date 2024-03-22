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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    int x = v.size();
    if ((n - x) % 2 == 0)
      cout << x << endl;
    else
      cout << x - 1 << endl;
  }
  return 0;
}
