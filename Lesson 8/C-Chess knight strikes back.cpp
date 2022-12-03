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
    int n;
    cin >> n;
    if (n == 1){
        cout << 8;
    } else {
        ll sm = 0;
        vector <ll> a = {1, 1, 1, 1, 0, 1, 1, 0, 1, 0};
        for (int i = 1; i < n; i++){
            vector <ll> b (10, 0);
            b[0] = a[5] + a[7];
            b[1] = a[6] + a[8];
            b[2] = a[3] + a[7];
            b[3] = a[2] + a[8] + a[9];
            b[5] = a[0] + a[6] + a[9];
            b[6] = a[1] + a[5];
            b[7] = a[0] + a[2];
            b[8] = a[1] + a[3];
            b[9] = a[3] + a[5];
            for (int j = 0; j < 10; j++){
                a[j] = b[j] % 1000000000;
            }
        }
        for (int j = 0; j < 10; j++){
            sm += a[j];
        }
        cout << sm % 1000000000;
    }

//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}