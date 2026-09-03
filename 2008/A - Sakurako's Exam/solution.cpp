#include <iostream>
using namespace std;
 
void solve() {
    int a, b;
    cin >> a >> b;
 
    // Total sum must be even (meaning 'a' must be even)
    if (a % 2 != 0) {
        cout << "NO
";
    } 
    // If 'b' is odd, we need at least two 1s (a >= 2) to compensate
    else if (b % 2 != 0 && a == 0) {
        cout << "NO
";
    } 
    else {
        cout << "YES
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