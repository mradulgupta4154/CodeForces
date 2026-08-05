#include <iostream>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    
    // If n is even or k is odd, a solution always exists
    if (n % 2 == 0 || k % 2 == 1) {
        cout << "YES
";
    } else {
        cout << "NO
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