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
    int n, c;
    cin >> n >> c;
    vector <ll> a(n);
    vector <ll> b(n);
    vector <ll> d(n, 0);
    vector <ll> t(n, 0);
    for (int i = 0; i < n - 1; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++){
        cin >> b[i];
    }
    if (a[0] < b[0] + c){
        d[1] = a[0];
    }else {
        d[1] = b[0] + c;
        t[1] = 1;
    }
    cout << 0 << " " << d[1] << " ";
    for (int i = 2; i < n; i++){
        if (t[i - 1]){
            if (a[i - 1] < b[i - 1]){
                d[i] = a[i - 1] + d[i - 1];
            }else {
                d[i] = b[i - 1] + d[i - 1];
                t[i] = 1;
            }
        } else {
            if (a[i - 1] < b[i - 1] + c){
                d[i] = a[i - 1] + d[i - 1];
            }else {
                d[i] = b[i - 1] + c + d[i - 1];
                t[i] = 1;
            }
        }
        cout << d[i] << " ";
    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}