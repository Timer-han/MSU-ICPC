#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

using ll = long long;
using ld = double;
using str = string;


int main() {
    str s;
    cin >> s;
    vector <int> a(0);
    vector <int> b(0);
    vector <int> c(s.size());
    int size = -1;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(') {
            a.push_back(1);
            b.push_back(i);
            size++;
        }if (s[i] == '{') {
            a.push_back(2);
            b.push_back(i);
            size++;
        }if (s[i] == '[') {
            a.push_back(3);
            b.push_back(i);
            size++;
        }if (s[i] == ')') {
            if (size >= 0 and a[size] == 1){
                a.pop_back();
                c[b[size]] = i;
                c[i] = b[size];
                b.pop_back();
                size--;
            } else{
                cout << -1 << endl;
                return 0;
            }
        }if (s[i] == '}') {
            if (size >= 0 and a[size] == 2){
                a.pop_back();
                c[b[size]] = i;
                c[i] = b[size];
                b.pop_back();
                size--;
            } else{
                cout << -1 << endl;
                return 0;
            }
        }if (s[i] == ']') {
            if (size >= 0 and a[size] == 3){
                a.pop_back();
                c[b[size]] = i;
                c[i] = b[size];
                b.pop_back();
                size--;
            } else{
                cout << -1 << endl;
                return 0;
            }
        }
    }
    for (int i : c){
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}
