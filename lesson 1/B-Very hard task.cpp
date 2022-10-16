#include <iostream>

using namespace std;

int main() {
    int t, n, k, q, a, b, c;
    cin >> n >> k >> q;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        t = 0;
        while (true) {
            if (a == b) {
                cout << t << endl;
                break;
            }

            if (a < b) {
                c = a;
                a = b;
                b = c;
            }

            a = (a + k - 2) / k;
            t++;
        }
    }
}
