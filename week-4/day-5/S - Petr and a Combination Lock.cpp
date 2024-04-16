#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool flag = 0;
    int m = (1 << n);
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                sum += arr[j];
            else
                sum -= arr[j];
        }

        if (sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
