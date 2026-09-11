#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(a[i] - a[i + 1]);
        if (diff != 5 && diff != 7) {
            cout << "NO
";
            return;
        }
    }
    cout << "YES
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