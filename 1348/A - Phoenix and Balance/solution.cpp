#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // (1 << (n / 2 + 1)) is equivalent to 2^(n / 2 + 1)
    int ans = (1 << (n / 2 + 1)) - 2;
    cout << ans << "
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