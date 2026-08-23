#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int max_val = max({x1, x2, x3});
    int min_val = min({x1, x2, x3});
    cout << max_val - min_val << "
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