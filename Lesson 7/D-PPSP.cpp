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
    ll n, l = 0, r = 0, kl = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 1) {
        cout << ":(";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == ')') {
            r++;
        } else {
            l++;
        }
        if (r >= l) {
            cout << ":(";
            return 0;
        }
    }
    l = r = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '(') {
            l++;
        } else {
            r++;
        }
        if (l >= r) {
            cout << ":(";
            return 0;
        }
    }
    kl = n / 2 - l;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            cout << '(';
        } else if (s[i] == ')') {
            cout << ')';
        } else {
            if (kl > 0) {
                cout << '(';
                kl--;
            } else {
                cout << ')';
            }
        }
    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}