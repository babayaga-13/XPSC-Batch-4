#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int N = 1e7 + 7;
vector<int> prime(N, 1);

void seive()
{
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    seive();
    while (t--)
    {
        ll x;
        cin >> x;
        ll a = sqrt(x);
        if (a * a != x)
        {
            cout << "NO\n";
        }
        else
        {
            if (prime[a] == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
