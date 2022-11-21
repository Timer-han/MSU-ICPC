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
    int n, k = 1, f;
    cin >> n;
//    auto start = chrono::system_clock::now();
    vector <int> b(0);
    vector <int> a(n);
    if (n >= 3){
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
    for (int i = 2; i <= n + 1; i++){
        vector <int> c(0);
        f = 0;
        if (i % 2 != 0) 
        {
            for (int j: b) 
            {
                if (i % j == 0) 
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0){
            b.push_back(i);
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }
//    cout << endl;
//    cout << chrono::duration<double>(chrono::system_clock::now() - start).count() << endl;
    return 0;
}
