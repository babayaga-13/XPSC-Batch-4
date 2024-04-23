#include <bits/stdc++.h>
#define ll long long
using namespace std;

int binary(int a[], int n, int x)
{
    int l = 1, r = n, indx = n + 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            indx = mid;
            r = mid - 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
    }
    return indx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (q--)
    {
        int x;
        cin >> x;
        cout << binary(a, n, x) << endl;
    }

    return 0;
}
