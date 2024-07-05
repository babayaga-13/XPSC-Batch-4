#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define for_ll for (ll i = 0; i < n; i++)

const ll N = 1e5 + 10;
bool vis[N];
vector<ll> g[N];

ll dfs(ll node, vector<vector<ll>> &adj, string &s, vector<ll> &dp)
{
    if (dp[node] != LLONG_MAX)
    {
        return dp[node];
    }

    ll left = adj[node][0];
    ll right = adj[node][1];

    if (left == 0 && right == 0)
    {
        return dp[node] = 0;
    }

    if (left != 0)
    {
        if (s[node - 1] == 'L')
            dp[node] = min(dp[node], dfs(left, adj, s, dp));
        else
            dp[node] = min(dp[node], 1 + dfs(left, adj, s, dp));
    }

    if (right != 0)
    {
        if (s[node - 1] == 'R')
            dp[node] = min(dp[node], dfs(right, adj, s, dp));
        else
            dp[node] = min(dp[node], 1 + dfs(right, adj, s, dp));
    }

    return dp[node];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<vector<ll>> adj(n + 1, vector<ll>(2));
        for (ll i = 1; i <= n; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[i][0] = u;
            adj[i][1] = v;
        }

        vector<ll> dp(n + 1, LLONG_MAX);
        cout << dfs(1, adj, s, dp) << endl;
    }
    return 0;
}
