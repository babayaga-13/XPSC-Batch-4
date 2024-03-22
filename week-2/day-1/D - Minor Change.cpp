#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1, s2;
  cin >> s1 >> s2;
  int n = s1.size();
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (s1[i] != s2[i])
      count++;
  }
  cout << count;
}
