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
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
      v[i] = i + 1;
    }
    for (int i = 2; i < n; ++i)
    {
      if (v[i] == (v[i - 1] | v[i - 2]))
      {
        swap(v[i], v[i - 1]);
      }
    }

    for (auto u : v)
    {
      cout << u << " ";
    }
    cout << endl;
  }

  return 0;
}
