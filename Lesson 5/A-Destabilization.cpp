#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <set>

using namespace std;

using ll = long long;
using ld = double;
using str = string;

int main() {

    ll n, k = 1, mx = 0, p = 0;
    cin >> n;
    vector <ll> a(n);
    vector <ll> len(0);
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] == a[i - 1]){
            k += 1;
        } else {
            len.push_back(i - k);
            k = 1;
        }
    }
    len.push_back(n - k);
//    auto start = chrono::system_clock::now();
    
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i : len){
        cout << i << " ";
    }
    cout << endl;
        
//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count();
    return 0;
}
