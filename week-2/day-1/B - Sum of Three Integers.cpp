#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int K, S, c = 0;
  cin >> K >> S;
  for (int i = 0; i <= K; i++)
  {
    for (int j = 0; j <= K; j++)
    {
      for (int k = 0; k <= K; k++)
      {
        if (i + j + k == S)
          c++;
      }
    }
  }
  cout << c << endl;
}
