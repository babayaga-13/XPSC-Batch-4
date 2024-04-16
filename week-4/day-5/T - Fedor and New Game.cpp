#include <bits/stdc++.h>
#define ll long long
using namespace std;
int setBits(int n)
{
    int c = 0;
    while (n)
    {
        c += n & 1;
        n >>= 1;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> v[i];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (setBits(v[i] ^ v[m]) <= k)
            count++;
    }
    cout << count << endl;
}
