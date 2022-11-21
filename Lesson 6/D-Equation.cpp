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

ll f(ll x, ll y, ll* a) {
    ll z = y, k = 0, p = x;
    while (y != 1) {
        a[k] = x / y;
        k++;
        x %= y;
        swap(x, y);
    }
    x = 1;
    y = a[k - 1];
    for (ll i = k - 2; i >= 0; i--) {
        x += a[i] * y;
        swap(x, y);
    }
    if ((y * z) % p == 1) {
        return y;
    }
    return -y;
}


int main() {
    ll t, a, b, p, k = 0, h;
    ll m[100000];
    cin >> t;
//    auto start = chrono::system_clock::now();
    for (; t > 0; t--) {
        cin >> a >> b >> p;
        h = p;
        a = ((a % p) + p) % p;
        b = (((-b) % p) + p) % p;
        if (a == 0) {
            if (b == 0) {
                cout << "Any" << endl;
            } else {
                cout << -1 << endl;
            }
            continue;
        }
        h = f(p, a, m);
        cout << (h * b % p + p) % p << endl;

    }

//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}