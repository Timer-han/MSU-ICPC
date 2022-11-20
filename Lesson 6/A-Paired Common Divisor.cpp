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

int main() {

    ll n, k = 0, mn, p = -1, x, y;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    cin >> a[0].first >> a[0].second;
    mn = a[0].first + a[0].second;
    for (int i = 1; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        if ((a[i].first + a[i].second) < mn){
            k = i;
            mn = (a[i].first + a[i].second);
        }

    }
//    auto start = chrono::system_clock::now();

    vector<ll> b(0);
    bool f;
    x = a[k].first;
    y = a[k].second;
    for (int i = 2; i < sqrt(max(x, y)); i++) {
        if (x % i == 0 || y % i == 0) {
            b.push_back(i);
        }
        if (x % i == 0) b.push_back(x / i);
        if (y % i == 0 && y != x) b.push_back(y / i);
    }
    b.push_back(x); b.push_back(y);
    for (ll i: b) {
//        cout << i << " ";
        f = true;
        for (int j = 0; j < n; j++) {
            if (a[j].first % i != 0 && a[j].second % i != 0) {
                f = false;
                break;
            }
        }
        if (f) {
            p = i;
        }
    }
    cout << p << endl;
//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
