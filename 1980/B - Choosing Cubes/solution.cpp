#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int favorite_val = a[f - 1];
    
    // Sort in non-increasing (descending) order
    sort(a.rbegin(), a.rend());
    
    // Check elements at boundaries around k
    int at_k = a[k - 1]; // 1-based index k
    
    if (at_k < favorite_val) {
        cout << "YES
";
    } else if (at_k > favorite_val) {
        cout << "NO
";
    } else { // at_k == favorite_val
        if (k < n && a[k] == favorite_val) {
            cout << "MAYBE
";
        } else {
            cout << "YES
";
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