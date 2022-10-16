#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int q, n, k = 0, p = 0;
    bool dir = true;
    char c;
    string s;
    vector<int> b(26, 0);
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s;
        cin >> n;
        for (int j = 0; j < 26; j++) {
            b[j] += (n - k) / 26;
        }
        for (int j = 0; j < (n - k) % 26; j++) {
//            cout << "p = " << p << endl;
            if (dir) {
                b[p]++;
                p = (p + 1) % 26;
            } else {
                b[p]++;
                p = (p + 25) % 26;
            }

        }

        k = n;
        if (s == "rev") {
            dir = !dir;
            if (dir) {
                p = (p + 2) % 26;
            } else {
                p = (p + 24) % 26;
            }
//            cout << dir << endl;
//            for (int j = 0; j < 26; j++){
//                cout << char('a' + j) << ' ';
//            }
//            cout << endl;
//            for (int j = 0; j < 26; j++){
//                cout << b[j] << ' ';
//            }
//            cout << endl;
        } else if (s == "cnt") {
            cin >> c;
            cout << b[c - 'a'] << endl;
        }
    }

}
