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
    int t, k, p, mxl = 0, mnr = 999999;
    ll R, smm;
    cin >> t >> k;
    vector <int> r(t);
    vector <int> l(t);
    for (int i = 0; i < t; i++) {
        cin >> r[i] >> l[i];
        mxl = max(mxl, l[i]);
        mnr = min(mnr, r[i]);
    }
    vector <ll> sm(mxl);
    vector<ll> w(k, 0);
    p = 0;
    R = 1;
    w[k - 1] = 1;
    for (int i = 1; i <= mxl; i++) {
        R = (R + w[p]) % 1000000007;
        w[p] = R;
        sm[i - 1] = R;
        p = (p + 1) % k;
    }

    for (int i = 0; i < t; i++){
        smm = 0;
        for (int j = r[i]; j <= l[i]; j++){
            smm = (smm + sm[j - 1]) % 1000000007;
        }
        cout << smm << "\n";
    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}