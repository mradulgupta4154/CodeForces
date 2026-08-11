#include <iostream>
 
using namespace std;
 
void solve() {
    long long x0, n;
    cin >> x0 >> n;
 
    long long rem = n % 4;
    long long delta = 0;
 
    if (rem == 1) {
        delta = -n;
    } else if (rem == 2) {
        delta = 1;
    } else if (rem == 3) {
        delta = n + 1;
    }
 
    if (x0 % 2 != 0) {
        delta = -delta;
    }
 
    cout << x0 + delta << "
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