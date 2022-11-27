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
    int t, n, mn, mni, mn2, mni2, mx, mxi;
    cin >> t;
//    auto start = chrono::system_clock::now();
    for (; t > 0; t--) {
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> b;
        cin >> a[0] >> a[1];


        mn = mn2 = mx = a[1];
        mni = mni2 = mxi = 1;
        for (int i = 2; i < n; i++) {
            cin >> a[i];
            if (a[i] <= mn2) {
                mn2 = a[i];
                mni2 = i;
            }
            if (a[i] >= mx) {
                mx = a[i];
                mxi = i;
                mni = mni2;
                mn = mn2;
            }
        }
        if (a[0] > mn - mx) {
            a[0] = mn - mx;
            b.push_back({1, mni + 1, mxi + 1});
        }
        for (int i = 1; i < n - 2; i++) {
            if (i == mni && mni + 1 == mxi) {
                mxi++;
                mx = a[mxi];
                mn2 = mx;
                mni2 = mxi;
                for (int j = mxi + 1; j < n; i++) {
                    if (a[j] <= mn2) {
                        mn2 = a[j];
                        mni2 = j;
                    }
                    if (a[j] >= mx) {
                        mx = a[j];
                        mxi = j;
                        mni = mni2;
                        mn = mn2;
                    }
                }
            } else if (i == mni) {
                mni++;
                mn = a[mni];
                for (int j = mni + 1; j < mxi; j++) {
                    if (mn >= a[j]) {
                        mn = a[j];
                        mni = j;
                    }
                }
            }
            if (a[i] > mn - mx) {
                a[i] = mn - mx;
                b.push_back({i + 1, mni + 1, mxi + 1});
            }
        }

        if (a[n - 1] < a[n - 2]) {
            cout << -1 << "\n";
            continue;
        }
        cout << b.size() << "\n";
        for (auto i: b) {
            for (auto j: i) {
                cout << j << " ";
            }
            cout << "\n";
        }

    }
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}