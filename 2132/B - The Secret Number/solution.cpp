#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> ans;
    long long p10 = 10; // Represents 10^k
 
    while (p10 + 1 <= n) {
        long long divisor = p10 + 1;
        if (n % divisor == 0) {
            ans.push_back(n / divisor);
        }
        // Avoid overflow when multiplying p10 by 10
        if (p10 > 1e17) break;
        p10 *= 10;
    }
 
    // Since p10 increases, x values were added in descending order.
    // Reverse to get ascending order.
    reverse(ans.begin(), ans.end());
 
    if (ans.empty()) {
        cout << 0 << "
";
    } else {
        cout << ans.size() << "
";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
        }
        cout << "
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