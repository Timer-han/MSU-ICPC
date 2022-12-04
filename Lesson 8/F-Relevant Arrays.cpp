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
    int n, k;
    ll sm = 0;
    cin >> n >> k;
    if (k == 1) {
        cout << n;
        return 0;
    }
    vector<vector<ll>> a(n, vector<ll>(k, 0));
    vector<vector<ll>> b(n);
    b[0].push_back(1);
    a[0][0] = a[0][1] = 1;
    for (int i = 1; i < n; i++) {
        a[i][0] = 1;
        for (int j = 1; j * j <= i + 1; j++) {
            if (j * j == i + 1){
                a[i][1]++;
                b[i].push_back(j);
                continue;
            }
            if ((i + 1) % j == 0) {
                a[i][1] += 2;
                b[i].push_back(j);
                b[i].push_back((i + 1) / j);
            }
        }
    }
    for (int i = 2; i < k; i++) {
        for (int j = 0; j < n; j++) {
            for (ll g: b[j]) {
                a[j][i] = (a[j][i] + a[g - 1][i - 1]) % 1000000007;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        sm = (sm + a[i][k - 1]) % 1000000007;
    }
    cout << sm;

//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}