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

    ll n, m;
    int p = 0, q = 0, k = 0, e = 0, f = 0;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
//    auto start = chrono::system_clock::now();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), [](int x, int y){
        return x > y;
    });
    while (a[p] < b[q]) {
        while (p < n - 1 && a[p] == a[p + 1]) {
            p++;
        }
        while (q < m - 1 && b[q] == b[q + 1]) {
            q++;
        }
        if (p > q) {
            for (int i = 0; i <= q; i++) {
                b[i]--;
            }
            k += q + 1;
        } else {
            for (int i = 0; i <= p; i++) {
                a[i]++;
            }
            k += p + 1;
        }
    }
    cout << k << endl;

//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count();
    return 0;
}
