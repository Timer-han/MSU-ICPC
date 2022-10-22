#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;

int main() {
    int t = 0, n, mn;
    cin >> t;
    for (int ti = 0; ti < t; ti++){
        mn = 1000000000;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                mn = min(mn, (a[i]^a[j]));
            }
        }
        cout << mn << endl;
    }


    return 0;
}
