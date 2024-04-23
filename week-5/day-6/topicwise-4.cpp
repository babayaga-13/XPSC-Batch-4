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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    while(k--)
    {
        int l, r;
        cin >> l >> r;

        auto itl = lower_bound(a.begin(), a.end(), l);
        auto itr = upper_bound(a.begin(), a.end(), r);

        cout << itr - itl << " ";
    }
    cout << '\n';
}
