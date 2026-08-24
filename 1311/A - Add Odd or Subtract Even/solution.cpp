#include <iostream>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (a == b) {
        cout << 0 << "
";
    } else if (a < b) {
        if ((b - a) % 2 != 0) {
            cout << 1 << "
";
        } else {
            cout << 2 << "
";
        }
    } else { // a > b
        if ((a - b) % 2 == 0) {
            cout << 1 << "
";
        } else {
            cout << 2 << "
";
        }
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