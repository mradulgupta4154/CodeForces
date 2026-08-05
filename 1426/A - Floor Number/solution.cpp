#include <iostream>
 
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    
    if (n <= 2) {
        cout << 1 << "
";
    } else {
        cout << 1 + (n - 2 + x - 1) / x << "
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