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
    ll t, a, b, p, k;
    pair <int, int> x(1, 0);
    pair <int, int> y(0, 1);
    pair <int, int> z;
    cin >> t;
//    auto start = chrono::system_clock::now();
    for (; t > 0; t--) {
        cin >> a >> b >> p;
        a = ((a % p) + p) % p;
        b = ((b % p) + p) % p;
        if (a == 0) {
            if (b == 0) {
                cout << "Any" << endl;
            } else {
                cout << -1 << endl;
            }
            continue;
        }
        x.first = 1; y.first = 0;
        x.second = 0; y.second = 1;
        while (a != 1) {
            z.first = x.first; z.second = x.second;
            k = a;
            x.first -= y.first * (p / a); x.second -= y.second * (p / a);
            a = p % a;
            y.first = z.first; y.second = z.second;
            p = k;
        }
        cout << ((x.first * b) % p + p) % p << endl;
    }

//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
