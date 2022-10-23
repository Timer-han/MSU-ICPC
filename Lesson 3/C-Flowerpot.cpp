#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;

int main() {

    ll n, d, mn = 19999999999;
    cin >> n >> d;
    vector<pair<ll, ll>> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i].first >> h[i].second;
    }
    auto start = chrono::system_clock::now();
    sort(h.begin(), h.end(), [](auto &x, auto &y) {
        return x.first < y.first;
    });
    for (int i = 1; i < n - 1; i++){
        for (int j = 0; j < n - i; j++){
            mn = min(mn, abs(h[j].first - h[j + i].first));
        }
        if (mn != 19999999999){
            cout << mn << endl;
            cout << fixed << setprecision(15) << chrono::duration<long double>(chrono::system_clock::now() - start).count() << endl;
            return 0;
        }
    }
    if (mn == 19999999999){
        cout << -1;
    }
    cout << mn << endl;
    cout << fixed << setprecision(15) << chrono::duration<long double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
