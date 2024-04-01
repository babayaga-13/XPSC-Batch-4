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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());
        int diff = max(mx - v[0], v[n - 1] - mn);

        for (int i = 1; i < n; i++)
            diff = max(diff, v[i - 1] - v[i]);
        
        cout << diff << endl;
    }
}
