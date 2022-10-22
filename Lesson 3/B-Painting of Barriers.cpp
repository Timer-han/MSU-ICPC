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
    ll n, mn = 19999999999;
    cin >> n;
    vector <ll> h(n);
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h.begin(), h.end(), [](int x, int y){return x > y;});
    mn = min(h[0], n);
    for (int i = 0; i < n - 1; i++){
        mn = min(mn, i + 1 + h[i + 1]);
    }
    cout << mn;
    return 0;
}
