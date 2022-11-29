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
    int t, k;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int> > a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end(), [](auto x, auto y){
            return x.first >= y.first;
        });
        vector<ll> dr(m + 1);
        for (int i = 0; i < m; ++i) {
            dr[i + 1] = dr[i] + a[i].first;
        }
        ll ans = 0;
        for (int i = 0; i < m; ++i) {
            int stone = a[i].second;
            int l = -1, r = m;
            while (r - l > 1) {
                int md = (l + r) / 2;
                if (a[md].first >= stone) {
                    l = md;
                } else {
                    r = md;
                }
            }
            int cnt = l + 1;
            cnt = min(cnt, n - 1);
            if (cnt <= i) {
                ans = max(ans, dr[cnt] + a[i].first + (ll) a[i].second * (n - 1 - cnt));
            }
        }
        ll sum = 0;
        int max_b = 0;
        for (int i = 0; i < min(n, m); ++i) {
            sum += a[i].first;
            max_b = max(max_b, a[i].second);
            k = sum + (ll) (n - i - 1) * max_b;
            ans = (ans > k ? ans : k);
        }
        cout << ans << '\n';
    }


//    auto start = chrono::system_clock::now();
//    cout << chrono::duration<double>(chrono::system_clock::now()-start).count();
    return 0;
}