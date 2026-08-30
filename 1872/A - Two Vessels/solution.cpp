#include <iostream>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int diff = abs(a - b);
    // Ceiling division of (diff / 2.0) / c -> diff / (2 * c)
    int moves = (diff + 2 * c - 1) / (2 * c);
    
    cout << moves << "
";
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