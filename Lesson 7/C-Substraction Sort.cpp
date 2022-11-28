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
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        if (arr[n - 2] > arr[n - 1]) {
            cout << -1;
            cout << endl;
        } else {
            if (arr[n - 1] < 0) {
                if (is_sorted(arr.begin(), arr.end())) {
                    cout << 0;
                    cout << endl;
                } else {
                    cout << -1;
                    cout << endl;
                }
            } else {
                cout << n - 2;
                cout << endl;
                for (int k = 1; k < n - 1; ++k) {
                    cout << n - k - 1 << ' ' << n - k << ' ' << n;
                    cout << endl;
                }
            }
        }
    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}