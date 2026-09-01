#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int count_zero = 0;
    int count_neg = 0;
 
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            count_zero++;
        } else if (x == -1) {
            count_neg++;
        }
    }
 
    int ans = count_zero;
    if (count_neg % 2 != 0) {
        ans += 2;
    }
 
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