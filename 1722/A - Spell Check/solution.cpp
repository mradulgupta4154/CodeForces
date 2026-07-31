#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if (n != 5) {
        cout << "NO
";
        return;
    }
    
    sort(s.begin(), s.end());
    if (s == "Timru") {
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