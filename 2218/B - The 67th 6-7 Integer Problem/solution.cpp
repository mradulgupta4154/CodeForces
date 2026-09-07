#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
void solve() {
    vector<long long> a(7);
    long long total_sum = 0;
    long long max_val = -100;
    
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
        total_sum += a[i];
        max_val = max(max_val, a[i]);
    }
    
    cout << (2 * max_val - total_sum) << "
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