#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    int n, m, k = 'Z' - 'A' + 1, d = 0, mx = 0;
    cin >> n >> m;
    vector<string> a(n, "");
    vector<bool> b(k, true);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < m; j++) {
            b[a[i][j] - 0] = false;
        }
    }
    for (int i = 'A'; i < 'Z' + 1; i++) {
        if (b[i] or i == 'O') continue;
        for (int j = 'A'; j < 'Z' + 1; j++) {
            if (b[j] or i == j or j == 'M') continue;
            d = 0;
            for (int p = 0; p < n; p++) {
                for (int q = 0; q < m; q++) {
                    if (q < m - 2) {
                        if (a[p][q] == i and a[p][q + 1] == i and a[p][q + 2] == j or \
                            a[p][q] == j and a[p][q + 1] == i and a[p][q + 2] == i) {
                            d++;
                        }
                    }
                    if (p < n - 2) {
                        if (a[p][q] == i and a[p + 1][q] == i and a[p + 2][q] == j or \
                            a[p][q] == j and a[p + 1][q] == i and a[p + 2][q] == i) {
                            d++;
                        }
                    }
                    if (p < n - 2 and q < m - 2) {
                        if (a[p][q] == i and a[p + 1][q + 1] == i and a[p + 2][q + 2] == j or \
                            a[p][q] == j and a[p + 1][q + 1] == i and a[p + 2][q + 2] == i) {
                            d++;
                        }
                        if (a[p + 2][q] == i and a[p + 1][q + 1] == i and a[p][q + 2] == j or \
                            a[p + 2][q] == j and a[p + 1][q + 1] == i and a[p][q + 2] == i) {
                            d++;
                        }
                    }
                }
            }
            mx = (mx > d ? mx : d);

        }
    }
    cout << mx;
}
