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
    int t, n, m, mx = 0;
    cin >> t;
    for (; t > 0; t--){
        cin >> n >> m;
        vector <vector<int>> a(m, (vector <int> (3)));
        for (int i = 0; i < n; i++){
            cin >> a[i][1] >> a[i][2];
            a[i][0] = a[i][1] + a[i][2];
            mx = max(mx, a[i][1]);
        }
        sort(a.begin(), a.end(), [](auto x, auto y){
            return x[0] > y[0];
        });
        for (int i = 0; i < n; i++){
            if ()
        }
    }


//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}