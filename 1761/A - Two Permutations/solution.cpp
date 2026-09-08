#include <iostream>
 
using namespace std;
 
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
 
    if ((a == n && b == n) || (a + b + 2 <= n)) {
        cout << "Yes
";
    } else {
        cout << "No
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