#include <iostream>
 
using namespace std;
 
const long long MOD = 1e9 + 7;
 
void solve() {
    long long n;
    cin >> n;
    
    long long term1 = 337;
    long long term2 = n % MOD;
    long long term3 = (n + 1) % MOD;
    long long term4 = (4 * n - 1) % MOD;
    
    long long ans = (term1 * term2) % MOD;
    ans = (ans * term3) % MOD;
    ans = (ans * term4) % MOD;
    
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