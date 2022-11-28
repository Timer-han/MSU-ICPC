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
    ll t, n, m, o;
    cin >> t;
    for (; t > 0; t--){
        cin >> n >> m;
        o = 0;
        vector <int> a(n);
        vector <int> b(n);
        cin >> a[0];
        for (int i = 1; i < n; i++){
            cin >> a[i];
            if (a[i-1] < 0 && a[i] > 0){
                o = i;
            }
        }
        for (int i = 1; i < m; i++){
            cin >> b[i];
        }
        // Code? Are you kidding? You won't be able to find it here...

    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}