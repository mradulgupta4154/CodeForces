#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    for (int k = 2; k <= 30; k++) {
        long long denominator = (1LL << k) - 1; // 2^k - 1
        if (n % denominator == 0) {
            cout << n / denominator << "
";
            return;
        }
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