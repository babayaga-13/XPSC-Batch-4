#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x != k)
      v.push_back(x);
  }
  for (auto u : v)
    cout << u << " ";
}
