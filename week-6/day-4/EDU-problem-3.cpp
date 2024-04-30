#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isGood(string& a, string& b, vector<int>& v, int m) {
    int idx = 0;

    for (int i = 0; i < a.size() && idx < b.size(); i++) {
        if (v[i] <= m) continue;
        if (a[i] == b[idx]) {
            idx++;
        }
    }

    return idx == b.size();
}

int main() {
    string a, b;
    cin >> a >> b;

    vector<int> v(a.size());
    for (int i = 1; i <= a.size(); i++) {
        int x;
        cin >> x;
        v[x - 1] = i;
    }

    int left = 0;
    int right = a.size();
    while (right > left + 1) {
        int mid = (left + right) / 2;
        if (isGood(a, b, v, mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }

    cout << left << endl;

    return 0;
}
