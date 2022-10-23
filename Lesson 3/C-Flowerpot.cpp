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
    ll n, d, mn = 19999999999;
    cin >> n >> d;
    vector<pair<ll, ll>> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i].first >> h[i].second;
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (h[j].second - h[i].second >= d){
                mn = min(mn, abs(h[i].first - h[j].first));
            }
        }
    }
    if (mn == 19999999999){
        cout << -1;
        return 0;
    }
    cout << mn;
    return 0;
}
