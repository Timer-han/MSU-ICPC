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
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll t, a, b, p, x, y;
    cin >> t;
    for (; t > 0; t--) {
        cin >> a >> b >> p;
        a %= p;
        b %= p;
        if (a == 0) {
            if (b == 0) {
                cout << "Any\n";
            } else {
                cout << -1 << "\n";
            }
            continue;
        } else if (b == 0) {
            cout << "0\n";
            continue;
        }
        x = -b;
        y = p - 2;
        while (y) {
            if (y & 1) {
                x = (x * a) % p;
            }
            a = (a * a) % p;
            y >>= 1;
        }
        cout << (x + p) % p << "\n";

    }
    return 0;
}