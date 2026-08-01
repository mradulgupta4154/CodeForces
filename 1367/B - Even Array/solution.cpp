#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i % 2 != a % 2) {
            if (a % 2 == 1) odd++;
            else even++;
        }
    }
    if (odd != even) {
        cout << -1 << "
";
    } else {
        cout << even << "
";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}