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
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      char c;
      for (int j = 0; j < x; j++)
      {
        cin >> c;
        if (c == 'D')
          a[i]++;
        else
          a[i]--;
        if (a[i] == 10)
          a[i] = 0;
        if (a[i] == -1)
          a[i] = 9;
      }
    }
    for (int i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << endl;
  }
}
