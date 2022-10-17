#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;

vector<int> a(0);
int p = -1;
bool debug = false;

int f(str s) {
    int n, m, t;
    if (s[0] == '*') {
        n = a[p];
        m = a[p - 1];
        a.pop_back();
        a.pop_back();
        a.push_back(m * n);
        p--;
    } else if (s[0] == '-') {
        n = a[p];
        m = a[p - 1];
        a.pop_back();
        a.pop_back();
        a.push_back(m - n);
        p--;
    } else if (s[0] == '+') {
        n = a[p];
        m = a[p - 1];
        a.pop_back();
        a.pop_back();
        a.push_back(m + n);
        p--;
    } else if (s[0] == '/') {
        n = a[p];
        m = a[p - 1];
        a.pop_back();
        a.pop_back();
        a.push_back(m / n);
        p--;
    } else {
        t = 0;
        for (char i : s) {
            t = t * 10 + ((int) i - 48);
        }

        a.push_back(t);
        p++;
    }
    if (debug){
        cout << "s = " << s << endl;
        cout << t << endl;
        cout << "a: ";
        for (int i : a) cout << i << " ";
        cout << endl;
    }
}

int main() {

    str s, c;
    int t, p = 0, n, m;
    getline(cin, s);
    for (char i: s) {
        if (i == ' ') {
            f(c);
            c = "";
            p = 0;
        } else {
            c.insert(p, 1, i);
            p++;
        }
    }
    f(c);
    cout << a[0];
    return 0;
}
