#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(k);
    long long max_val = 0;
    
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }
    
    long long total_ops = 0;
    bool skipped_max = false;
    
    for (int i = 0; i < k; i++) {
        // Leave one instance of the maximum element intact
        if (a[i] == max_val && !skipped_max) {
            skipped_max = true;
            continue;
        }
        
        // (a[i] - 1) splits + a[i] merges
        total_ops += (2 * a[i] - 1);
    }
    
    cout << total_ops << "
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