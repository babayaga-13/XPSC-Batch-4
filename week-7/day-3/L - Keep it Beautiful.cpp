#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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
        ll n, m, f = 0;
        cin >> n >> m;
        ll mn = m, mx = m;
        string s;
        s += "1";
        for (int i = 0; i < n - 1; i++) {
            int x;
            cin >> x;
            if (x >= mx && f == 0) {
                s += "1";
                mx = x;
            }
            else{
                if (x <= mn)  {
                    if (f != 1) {
                        s += "1";
                        mx = x;
                        f++;
                    }
                    else if (f == 1) {
                        if (x <= mn && x >= mx){
                            s += "1";
                            mx = x;
                        }
                        else
                            s += "0";
                    }
                }
                else
                    s += "0";
            }
        }
        cout << s << endl;
    }
}
