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
    ll a,b,n;
    cin>>a>>b>>n;
    ll v[n];
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v,v+n);
    ll s=b;
    for(int i=0;i<n;i++)
        s+=min(a-1,v[i]);
    cout<<s<<endl;
   }
 }
