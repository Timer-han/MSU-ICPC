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
    int n, mn = 0, k = 0, x, y;
    char p;
    cin >> n;
    vector<vector<int>> a(27);
    vector<vector<int>> b(27);

    vector<vector<int>> s(27);
    vector<vector<int>> t(27);
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p == '?') {
            p = 'z' + 1;
        }
        a[p - 'a'].push_back(i + 1);
        s[p - 'a'].push_back(1);
    }
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p == '?') {
            p = 'z' + 1;
        }
        b[p - 'a'].push_back(i + 1);
        t[p - 'a'].push_back(1);
    }
    for (int i = 0; i < 26; i++) {
        x = a[i].size();
        y = b[i].size();
        k += min(x, y);
        mn += abs(x - y);
    }
    mn = min(n, int(k + a[26].size() + b[26].size()));
    cout << mn << "\n";
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < min(a[i].size(), b[i].size()); j++) {
            cout << a[i][j] << " " << b[i][j] << "\n";
            s[i][j] = 0;
            t[i][j] = 0;
        }
    }
    x = y = 0;
    k = b[0].size();
    for (int i = 0; i < a[26].size(); i++){
        while (x >= k || !t[y][x]){
            if (x >= k){
                y++;
                x = 0;
                k = b[y].size();
            } else if(!t[y][x]){
                x++;
            }
        }
        s[26][i] = t[y][x] = 0;
        cout << a[26][i] << " " << b[y][x] << "\n";
    }
    x = y = 0;
    k = a[0].size();
    for (int i = 0; i < b[26].size(); i++){
        if (!t[26][i]){
            continue;
        }
        while (x >= k || !s[y][x]){
            if (x >= k){
                y++;
                x = 0;
                k = a[y].size();
            } else if(!s[y][x]){
                x++;
            }
        }
        if (y > 26){
            break;
        }
        t[26][i] = s[y][x] = 0;
        cout << a[y][x] << " " << b[26][i] << "\n";
    }
    return 0;
}