#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
// Function to compute GCD
long long gcd(long long a, long long b) {
    return std::gcd(a, b);
}
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long g1 = 0, g2 = 0;
 
    // Step 1: Calculate GCD for alternating indices
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            g1 = gcd(g1, a[i]);
        } else {
            g2 = gcd(g2, a[i]);
        }
    }
 
    // Step 2: Test candidate g1
    bool ok1 = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % g1 == 0) {
            ok1 = false;
            break;
        }
    }
 
    if (ok1) {
        cout << g1 << "
";
        return;
    }
 
    // Step 3: Test candidate g2
    bool ok2 = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % g2 == 0) {
            ok2 = false;
            break;
        }
    }
 
    if (ok2) {
        cout << g2 << "
";
        return;
    }
 
    // Neither worked
    cout << 0 << "
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