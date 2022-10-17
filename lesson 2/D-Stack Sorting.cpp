#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;

int main() {
    int n, p = -1, m = 1;
    cin >> n;
    vector<int> a(n);
    vector<int> b(0);
    vector<int> c(0);

    for (int i = n - 1; i >= 0; i--) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        p++;
        b.push_back(a[n - i - 1]);
        c.push_back(0);
        while (p >= 0 && b[p] == m) {
            m++;
            c.push_back(1);
            b.pop_back();
            p--;
        }

    }

    if (!b.empty()) {
        cout << "impossible" << endl;
        return 0;
    }
    for (int i: c) cout << (i ? "pop" : "push") << endl;


    return 0;
}
