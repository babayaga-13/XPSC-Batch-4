#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        int ans = upper_bound(a,a+n,x)-a;
        cout<<ans<<endl;
    }
}
