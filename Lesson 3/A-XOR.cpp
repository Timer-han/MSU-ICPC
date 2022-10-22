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
    ll t = 0, n, mn;
    cin >> t;
    for (int ti = 0; ti < t; ti++) {
        mn = 19999999999;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++) {
            mn = min(mn, (a[i] ^ a[i + 1]));
        }
        cout << mn << endl;
    }


    return 0;
}
