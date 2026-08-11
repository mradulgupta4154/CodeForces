#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    if (n == 1) {
        cout << 0 << "
";
        return;
    }
 
    int max_diff = a[n - 1] - a[0];
 
    // Case 1: Fix a[0], pick best a[i] to move to the last position (i in [1, n-1])
    for (int i = 1; i < n; i++) {
        max_diff = max(max_diff, a[i] - a[0]);
    }
 
    // Case 2: Fix a[n-1], pick best a[i] to move to the first position (i in [0, n-2])
    for (int i = 0; i < n - 1; i++) {
        max_diff = max(max_diff, a[n - 1] - a[i]);
    }
 
    // Case 3: Rotate adjacent elements (a[i] becomes new a[n], a[i+1] becomes new a[0])
    for (int i = 0; i < n - 1; i++) {
        max_diff = max(max_diff, a[i] - a[i + 1]);
    }
 
    cout << max_diff << "
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