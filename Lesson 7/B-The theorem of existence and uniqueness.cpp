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


void f(vector <vector <int>> &a, vector <vector <int>> &b, int x, int y, int n, int m){
    int k = 1, t;
    vector <pair <int, int>> st (1);
    vector <vector <int>> d(n, vector<int>(m, 1));
    st[0].first = x;
    st[0].second = y;
    while (k > 0){
        t = 0;
        d[x][y] = 0;
        if (x > 0 && a[x - 1][y] == 1){
            st.push_back({x - 1, y});
            t++;
        } if (x < m - 1 && a[x + 1][y] == 1){
            st.push_back({y - 1, y});
            t++;
        } if (y > 0 && a[x][y - 1] == 1){
            st.push_back({x - 1, y});
            t++;
        } if (y < n - 1 && a[x][y + 1] == 1){
            st.push_back({x - 1, y});
            t++;
        } if (t == 0){

        }
    }
    // возвращает 1 если нет цикла или количество клеток чётно, 0 - иначе
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m, k = 0;
    char c;
    cin >> n >> m;
    vector <vector <int>> a(n, vector<int>(m, 0));
    vector <vector <int>> b(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> c;
            if (c == '.'){
                k++;
                a[i][j] = 1;
            }
        }
    }
    if (k % 2 == 1){
        cout << "Not unique";
        return 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (b[i][j]){
                continue;
            }

        }
    }
//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}