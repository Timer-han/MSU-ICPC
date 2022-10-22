#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;

int main() {
    ll n, d, mn = 19999999999, x = 0;
    cin >> n >> d;
    vector<pair<ll, ll>> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i].first >> h[i].second;
    }
    sort(h.begin(), h.end(), [](auto &x, auto &y) {
        return x.second < y.second;
    });
    sort(h.begin(), h.end(), [](auto &x, auto &y) {
        return x.first < y.first;
    });

    for (int i = 1; i < n - 1; i++) {
        if (h[x].second - h[i].second >= d) {
            cout << h[x].first - h[i].first << endl;
            return 0;
        }
        if (h[x].first != h[i].first) {
            x = i;
        }
    }

    cout << -1;
    return 0;
}
