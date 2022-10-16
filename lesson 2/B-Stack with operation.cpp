#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;


int main() {
    int n, p, as = 0, mxs = 0;
    str s;
    cin >> n;
    vector <int> a(0);
    vector <int> mx(0);

    for (int t = 0; t < n; t++){
        cin >> s;
        if (s == "push"){
            cin >> p;
            a.push_back(p);
            as++;
            if (mxs == 0 or mx[mxs - 1] <= p){
                mxs++;
                mx.push_back(p);
            }
        }else if (s == "pop"){
            if (as == 0) continue;
            if (a[as - 1] == mx[mxs - 1]){
                mx.pop_back();
                mxs--;
            }
            a.pop_back();
            as--;
        }else if (s == "max"){
            cout << mx[mxs - 1] << endl;
        }
    }
    return 0;
}
