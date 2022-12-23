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
    ios::sync_with_stdio(false);
    ll n, x, y, k, sm, nb;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    vector<ll> v(n);
    vector<bool> u(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i]--;
    }
    for (int t = -1; t < n - 2; t++) {
        if (t != -1) u[v[t]] = true;
        nb = n - t - 1;
        vector<vector<ll>> b(nb, vector<ll>(nb));
        x = 0;
        for (int i = 0; i < n; i++) {
            if (u[i]) {
                x++;
                continue;
            }
            y = 0;
            for (int j = 0; j < n; j++) {
                if (u[j]) {
                    y++;
                    continue;
                }
                b[i - x][j - y] = a[i][j];
            }
        }
        for (k = 0; k < nb - 1; k++) {
            for (int i = 0; i < nb; i++) {
                for (int j = 0; j < nb; j++) {
                    if (b[i][j] >= b[i][k] + b[k][j]) {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
        k = nb - 1;
        sm = 0;
        for (int i = 0; i < nb; i++) {
            for (int j = 0; j < nb; j++) {
                if (b[i][j] >= b[i][k] + b[k][j]) {
                    b[i][j] = b[i][k] + b[k][j];
                }
                sm += b[i][j];
            }
        }
        cout << sm << " ";

    }
    cout << 0 << "\n";

//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count();
    return 0;
}