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
            if (q < m - 1) {
                k += (q + 1) * abs(b[q + 1] - b[q]);
                for (int i = 0; i <= q; i++) {
                    b[i] = b[q + 1];
                }
            } else{
                k += m * abs(b[q] - a[p]);
                for (int i = 0; i <= q; i++) {
                    b[i] = a[p];
                }
            }
        } else {
            if (p <= n - 1) {
                k += (p + 1) * abs(a[p + 1] - a[p]);
                for (int i = 0; i <= p; i++) {
                    a[i] = a[p + 1];
                }
            } else{
                k += n * abs(b[q] - a[p]);
                for (int i = 0; i <= p; i++) {
                    a[i] = b[q];
                }
            }
        }
//        cout << "k = " << k << endl;
//        cout << "p = " << p << ", q = " << q << endl;
//        for (int i = 0; i < n; i++){
//            cout << a[i] << " ";
//        } cout << endl;
//        for (int i = 0; i < m; i++){
//            cout << b[i] << " ";
//        } cout << endl;


    }
    cout << k << endl;

//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count();
    return 0;
}
