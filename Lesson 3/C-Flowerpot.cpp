#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <queue>
#include <iomanip>

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
        return x.second < y.second;
    });
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j > i; j--){
            if (h[j].second - h[i].second < d){
                break;
            }
            mn = min(mn, abs(h[j].first - h[i].first));
        }
    }
    if (mn != 19999999999){
        cout << mn << endl;
    } else {
        cout << -1 << endl;
    }
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();

    return 0;
}
