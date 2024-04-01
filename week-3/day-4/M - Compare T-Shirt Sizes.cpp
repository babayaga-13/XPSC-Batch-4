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
        string a, b;
        cin >> a >> b;
        int x = a.size();
        int y = b.size();
        if (a[x - 1] > b[y - 1])
        {
            cout << "<" << endl;
        }
        else if (a[x - 1] < b[y - 1])
        {
            cout << ">" << endl;
        }
        else if (a.back() == 'L')
        {

            if (x > y)
                cout << ">" << endl;
            else if (x < y)
                cout << "<" << endl;
            else
                cout << "=" << endl;
        }
        else
        {
            if (x < y)
                cout << ">" << endl;
            else if (x > y)
                cout << "<" << endl;
            else
                cout << "=" << endl;
        }
    }
}
