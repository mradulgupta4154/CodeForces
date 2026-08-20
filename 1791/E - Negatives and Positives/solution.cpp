#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    long long sum_abs = 0;
    int neg_count = 0;
    long long min_abs = 1e18;
    
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x < 0) {
            neg_count++;
        }
        sum_abs += abs(x);
        min_abs = min(min_abs, abs(x));
    }
    
    if (neg_count % 2 == 0) {
        cout << sum_abs << "
";
    } else {
        cout << sum_abs - 2 * min_abs << "
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