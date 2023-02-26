#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <set>
#include <cmath>

using namespace std;

using ll = long long;
using ld = double;
using str = string;
int lm = INT32_MAX, v = 0, mx = INT32_MAX;

void dfs(int x, int y, int l, int m, auto &u, auto &a) {
    if (u[x]) {
        return;
    }
    if (x == y) {
        if (m <= mx) {
            lm = min(l, lm);
            mx = m;
        }
        return;
    }
    u[x] = true;
    for (pair i: a[x]) {
        dfs(i.first, y, l + i.second, max(m, i.second), u, a);
    }
    u[x] = false;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int r, x, y, z;

    cin >> v >> r;
    vector<vector<pair<int, int>>> a(v);
    vector<int> u(v, 0);
    for (int i = 0; i < r; i++) {
        cin >> x >> y >> z;
        x--;
        y--;
        a[x].push_back(make_pair(y, z));
    }
    cin >> x >> y;

    dfs(x - 1, y - 1, 0, 0, u, a);

    if (lm == INT32_MAX) {
        cout << -1;
    } else {
        cout << lm << " " << mx << "\n";
    }


//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count();
    return 0;
}