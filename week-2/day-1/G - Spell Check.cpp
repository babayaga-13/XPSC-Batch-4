#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{ 
  ios_base::sync_with_stdio(false);	cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    string s1 = "Timur";
    int a, c = 0;
    cin >> a;
    cin >> s;
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    if (s == s1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
 }
