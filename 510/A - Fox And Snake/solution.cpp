#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
 
    for (int r = 1; r <= n; r++) {
        string row(m, '.');
        if (r % 2 == 1) {
            // odd row: fully filled
            row = string(m, '#');
        } else {
            // even row: single connector
            int k = r / 2;          // 1, 2, 3, ...
            if (k % 2 == 1) row[m - 1] = '#'; 
            else row[0] = '#';                 
        }
        cout << row << "
";
    }
}