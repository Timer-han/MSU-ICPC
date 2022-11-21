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
    ll t, a, b, p, k = 0, h;
    vector<int> m(10000);
    cin >> t;
//    auto start = chrono::system_clock::now();
    for (; t > 0; t--) {
        cin >> a >> b >> p;
        h = p;
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
        while (a != 1){
            m.push_back(p / a);
            p %= a;
            swap(a, p);
            k++;

        }
        for (int i = 0; i < k; i++){
            p *= m[i];
            swap(a, p);
        }
        cout << ((p * b % h) + h) % h << endl;

    }

//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
