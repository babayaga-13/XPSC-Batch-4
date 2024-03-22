
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int diff(string a, string b)
{
  int c = 0;
  for (int i = 0; i < a.size(); ++i)
  {
    c += abs(a[i] - b[i]);
  }
  return c;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
      string s;
      cin >> s;
      v.push_back(s);
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        mn = min(mn, diff(v[i], v[j]));
      }
    }
    cout << mn << endl;
    ;
  }
}
