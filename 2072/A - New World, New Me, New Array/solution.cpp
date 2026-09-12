#include <iostream>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long n, k, p;
    cin >> n >> k >> p;
    
    long long abs_k = abs(k);
    
    // Check if the total maximum capacity is sufficient
    if (abs_k > n * p) {
        cout << -1 << "
";
    } else {
        // Ceiling division: ceil(|k| / p)
        long long ans = (abs_k + p - 1) / p;
        cout << ans << "
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