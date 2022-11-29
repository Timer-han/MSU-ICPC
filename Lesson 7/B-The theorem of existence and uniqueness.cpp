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
    int n, m, k = 0, x, y;
    char c;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<vector<int>> b(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == '.') {
                k++;
                a[i][j] = 1;
            }
        }
    }
    if (k % 2 == 1) {
        cout << "Not unique";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                if (j < m - 1 && a[i][j + 1] == 1) {
                    a[i][j] = 2;
                    a[i][j + 1] = 3;
                } else if (i < n - 1 && a[i + 1][j] == 1) {
                    a[i][j] = 4;
                    a[i + 1][j] = 5;
                } else {
                    while (true) {
                        if (j > 0 && a[i][j - 1] > 0) {
                            a[i][j] = 2;
                            k = a[i][j - 1];
                            x = i;
                            y = j - 1;
                        } else if (i > 0 && a[i - 1][j] > 0) {
                            a[i][j] = 4;
                            k = a[i - 1][j];
                            x = i;
                            y = j - 1;
                        } else {
                            cout << "Not unique";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                cout << "* ";
            }
            if (a[i][j] == 2) {
                cout << "< ";
            }
            if (a[i][j] == 3) {
                cout << "> ";
            }
            if (a[i][j] == 4) {
                cout << "^ ";
            }
            if (a[i][j] == 5) {
                cout << "v ";
            }
        }
        cout << "\n";
    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}