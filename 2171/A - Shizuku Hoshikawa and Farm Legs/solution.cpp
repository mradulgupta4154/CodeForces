#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // If n is odd, no combination of 2-leg and 4-leg animals can form n legs
    if (n % 2 != 0) {
        cout << 0 << "
";
    } else {
        // Number of possible choices for cows ranges from 0 to n / 4
        cout << (n / 4) + 1 << "
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