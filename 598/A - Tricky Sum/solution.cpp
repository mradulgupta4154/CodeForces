#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    // Calculate sum from 1 to n
    long long total_sum = n * (n + 1) / 2;
 
    // Calculate sum of powers of 2 <= n
    long long sum_powers = 0;
    long long p = 1;
    while (p <= n) {
        sum_powers += p;
        p *= 2;
    }
 
    // Subtract twice the sum of powers of 2
    long long ans = total_sum - 2 * sum_powers;
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