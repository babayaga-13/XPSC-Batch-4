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
        ll n, z = -1, o = -1;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0 && z == -1)
                z = i;
        }
        ll ans = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                c++;
            else
                ans += c;
        }

        if (z != -1)
        {
            v[z] = 1;
            ll ans1 = 0;
            c = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                    c++;
                else
                    ans1 += c;
            }
            v[z] = 0;
            c = 0;
            ans = max(ans, ans1);
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1 && o == -1)
                o = i;
        }
        if (o != -1)
        {
            v[o] = 0;
            c = 0;
            ll ans2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                    c++;
                else
                    ans2 += c;
            }
            ans = max(ans, ans2);
        }

        cout << ans << endl;
    }
}
