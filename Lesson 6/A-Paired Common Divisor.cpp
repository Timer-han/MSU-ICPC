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

    ll n, k = 1, mn, p = -1;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    cin >> a[0].first >> a[0].second;
    mn = min(a[0].first, a[0].second);
    for (int i = 1; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        mn = min(min(a[i].first, a[i].second), mn);
    }
//    auto start = chrono::system_clock::now();

    vector<ll> b(0);
    bool f;
    for (int i = 2; i < sqrt(mn); i++) {
        if (mn % i == 0) {
            b.push_back(i);
            b.push_back(mn / i);
        }
    }
    for (ll i: b) {
        f = true;
        for (int j = 0; j < n; j++) {
            if (a[j].first % i != 0 && a[j].second % i != 0) {
                f = false;
                break;
            }
        }
        if (f) {
            p = i;
            break;
        }
    }
    cout << p << endl;
//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
