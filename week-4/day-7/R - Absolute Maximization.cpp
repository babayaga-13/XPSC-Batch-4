#include <bits/stdc++.h>
#define ll long long
#define vi vector<ll>
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        ll mino = 2048 - 1;
        ll maxo = 0;
        
        for (int i = 0; i < n; ++i) {
            mino &= a[i];
            maxo |= a[i];
        }
        
        cout << maxo - mino << endl;
    }
    
    return 0;
}
