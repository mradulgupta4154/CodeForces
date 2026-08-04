#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
 
    // Convert all 'G' characters to 'B' in both strings
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'G') s1[i] = 'B';
        if (s2[i] == 'G') s2[i] = 'B';
    }
 
    if (s1 == s2) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}