    #include <iostream>
    #include <string>
    #include <vector>
    #include <ctime>
    #include <chrono>
    #include <algorithm>
    #include <queue>
    #include <iomanip>

    using namespace std;

    using ll = long long;
    using ld = double;
    using str = string;

    int main() {

        ll n, sm = 0;
        cin >> n;
        vector<pair<ll, ll>> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i].first >> h[i].second;
        }
//        auto start = chrono::system_clock::now();
        sort(h.begin(), h.end(), [](auto &x, auto &y){
            return x.first - x.second > y.first - y.second;
        });
        for (int i = 1; i <= n; i++){
            sm += h[i - 1].first * (i - 1) + h[i - 1].second * (n - i);
        }

        cout << sm << endl;
    //    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();

        return 0;
    }
