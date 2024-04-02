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
  stack<string> s;

  while (t--)
  {
    string x;
    cin >> x;
    s.push(x);
  }

  set<string> st;
  while (!s.empty())
  {
    if (st.find(s.top()) == st.end())
    {
      st.insert(s.top());
      string y = s.top();
      cout << y.substr(y.size() - 2);
    }
    s.pop();
  }
  return 0;
}
