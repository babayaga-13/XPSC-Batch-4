#include <bits/stdc++.h>
#define ll long long
using namespace std;

void binary(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            cout << "YES\n";
            return;
        }
        else if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        int x;
        cin >> x;
        binary(a, n, x);
    }

    return 0;
}
