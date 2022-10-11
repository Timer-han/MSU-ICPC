#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dfs(int v){
    int t = 0;
    return t;
}
int main() {
    int n, k, q, c = 0;
    cin >> n >> k >> q;
    vector <vector <int>> a(k);
    for (int i = 0; i < k; i++){
        for (int j = 0; j < n; j++){
            c++;
            if (c >= k){
                break;
            }
            a[i].push_back(c);
            a[c].push_back(i);
        }
        if (c >= k){
            break;
        }
    }
    c = 0;
    for (int i = 0; i < k; i++){
        cout << i + 1 << " - ";
        for (int j = 0; j < a[i].size(); j++){
            c++;
            if (c >= k){
                break;
            }
            cout << a[i][j] + 1<< ' ';
        }
        if (c >= k){
            break;
        }
        cout << "\n";
    }
}
