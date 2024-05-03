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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int z = count(s.begin(), s.end(), '0');
        int o = n - z;
        int x = min(o, z);
        if (x % 2)
            cout << "Zlatan\n" ;
        else
            cout << "Ramos\n";
    }

}
