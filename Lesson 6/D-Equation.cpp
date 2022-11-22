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

ll invert(ll a, ll m)
{
    if (a < 1 or m < 2)
        return -1;

    ll u1 = m;
    ll u2 = 0;
    ll v1 = a;
    ll v2 = 1;

    while (v1 != 0)
    {
        ll q = u1 / v1;
        ll t1 = u1 - q*v1;
        ll t2 = u2 - q*v2;
        u1 = v1;
        u2 = v2;
        v1 = t1;
        v2 = t2;
    }

    return u1 == 1 ? (u2 + m) % m : -1;
}



int main() {
    ll t, a, b, p, x, y;
    cin >> t;
//    auto start = chrono::system_clock::now();
    for (; t > 0; t--) {
        cin >> a >> b >> p;
        a %= p; b %= p;
        if (a == 0) {
            if (b == 0) {
                cout << "Any\n";
            } else {
                cout << -1 << "\n";
            }
            continue;
        } else if (b == 0){
            cout << "Any\n";
            continue;
        }
        x = -b;
        y = p - 2;
        while (y){
            if (y & 1){
                x = (x * a) % p;
            }
            a = (a * a) % p;
            y >>= 1;
        }
        cout << (x + p) % p << "\n";

    }

//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << "\n";
    return 0;
}