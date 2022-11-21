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
    ll n, k, c = 0, ans = -1;
    vector <ll> a(0);
    cin >> n >> k;
    ll t = (ll) sqrt(n);
//    auto start = chrono::system_clock::now();
    for (int i = 1; i <= t; i++){
        if (n % i == 0){
            c++;
            if (i * i != n) {
                a.push_back(n / i);
            }
        }
        if (k == c){
            ans = i;
        }
    }
//    for (ll i : a){
//        cout << i << " ";
//    }
//    cout << endl;

    if ((k <= 2 * c - (t * t == n ? 0 : 1) + 1) && ans == -1){
//        cout << a.size() - k + c << endl;
        ans = a[a.size() - k + c];
    }

    cout << ans << endl;


//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
