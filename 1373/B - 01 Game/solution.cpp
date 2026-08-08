#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int zeros = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }
 
    int moves = min(zeros, ones);
 
    if (moves % 2 == 1) {
        cout << "DA
";
    } else {
        cout << "NET
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}