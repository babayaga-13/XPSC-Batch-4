
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
    while (t--)
    {
        ll x,t=1;
        cin>>x;
        while(t<x){
            t*=2;
        }
        if(t==x){
            cout<<0<<" "<<x<<endl;
        }
        else{
            t/=2;
            cout<<(t^x)<<" "<<t<<endl;
        }
    }
}
