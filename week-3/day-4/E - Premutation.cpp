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
        unordered_map<int, int> freq;
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == 0)
                    freq[a[i][j]]++;
            }
        }
        int maxFreq = 0;
        int maxFreqNum = 0;
        for (auto &pair : freq)
        {
            if (pair.second > maxFreq)
            {
                maxFreq = pair.second;
                maxFreqNum = pair.first;
            }
        }
        cout << maxFreqNum << " ";
        for (int i = 0; i < n; i++)
        {
            int f = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][j] == maxFreqNum)
                {
                    f++;
                    break;
                }
            }
            if (f == 0)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    cout << a[i][j] << " ";
                }
                break;
            }
        }
        cout << endl;
    }
}
