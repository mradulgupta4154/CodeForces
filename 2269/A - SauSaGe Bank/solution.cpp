#include <iostream>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    
    // One maximum period of length (n - k + 1) and (k - 1) periods of length 1
    long long ans = (1LL << (n - k + 1)) + 2 * (k - 1);
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