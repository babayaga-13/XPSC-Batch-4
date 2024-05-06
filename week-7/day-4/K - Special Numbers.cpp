#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long ans = 0;
        long long power = 1;
        while (k > 0)
        {
            if (k & 1)
            {
                ans = (ans + power) % MOD;
            }
            power = (power * n) % MOD;
            k >>= 1; 
        }

        cout << ans << endl;
    }

    return 0;
}
