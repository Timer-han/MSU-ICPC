#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, s, c, p = 0, t = 0;
    cin >> n >> s;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    vector<int> d(n, 0);
    vector<int> m(0);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        d[i] = i;
        if (b[i] - a[i] > 0) {
            c = a[i];
            a[i] = a[p];
            a[p] = c;
            c = b[i];
            b[i] = b[p];
            b[p] = c;
            c = d[i];
            d[i] = d[p];
            d[p] = c;
            p++;
        }
    }
    c = 0;
    for (int i = 0; i < n; i++){
        cout << a[i] << " " << b[i] << ' ' << b[i] - a[i] << endl;
    }
    cout << "p = " << p << endl;
    while (t < p) {
        if (s - a[c % n] >= 0) {
            s -= a[c % n] - b[c % n];
            m.push_back(c % n);
            a[c % n] = 100000000;
            t++;
        }
        c++;
        if (c > 10000000) {
            cout << "-2";
            return 0;
        }
    }
    c = 0;
    t = 0;
    for (int i = 0; i < 1100; i++) {
        for (int j = p; j < n; j++) {
            if (b[j] - a[j] == -i) {
                if (s - a[j] >= 0) {

                    s -= a[j] - b[j];
                    m.push_back(j);
                    a[j] = 100000000;
                } else {
                    cout << "-1";
                    return 0;
                }
            }
        }
    }
    for (int i = 0; i < m.size(); i++) {
        cout << m[d[i]] + 1 << ' ';
    }


}
