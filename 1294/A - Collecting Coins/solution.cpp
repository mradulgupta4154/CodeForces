#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long a, b, c, n;
    cin >> a >> b >> c >> n;
    
    long long total = a + b + c + n;
    long long max_coins = max({a, b, c});
    
    if (total % 3 == 0 && total / 3 >= max_coins) {
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