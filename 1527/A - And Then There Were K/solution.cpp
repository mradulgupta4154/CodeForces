#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // Find the highest set bit position
    int msb = 0;
    while ((1 << (msb + 1)) <= n) {
        msb++;
    }
    
    // The answer is 2^msb - 1
    cout << ((1 << msb) - 1) << "
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