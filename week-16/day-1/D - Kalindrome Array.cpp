#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool palindrome(vector<int> &v, int x)
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == x)
            i++;
        else if (v[j] == x)
            j--;
        else if (v[i] == v[j])
        {
            i++;
            j--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int flag = 1;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                flag = palindrome(v, v[i]) || palindrome(v, v[j]);
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
