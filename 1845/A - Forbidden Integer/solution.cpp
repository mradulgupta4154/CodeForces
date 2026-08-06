#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k, x;
    cin >> n >> k >> x;
 
    if (x != 1) {
        cout << "YES
";
        cout << n << "
";
        for (int i = 0; i < n; i++) {
            cout << 1 << (i == n - 1 ? "" : " ");
        }
        cout << "
";
    } else {
        // x is 1, so we cannot use 1
        if (k == 1) {
            cout << "NO
";
        } else if (n % 2 == 1 && k == 2) {
            cout << "NO
";
        } else {
            cout << "YES
";
            if (n % 2 == 0) {
                cout << n / 2 << "
";
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << (i == n / 2 - 1 ? "" : " ");
                }
                cout << "
";
            } else {
                // n is odd, use one 3 and the rest 2s
                cout << (n - 3) / 2 + 1 << "
";
                cout << 3;
                for (int i = 0; i < (n - 3) / 2; i++) {
                    cout << " " << 2;
                }
                cout << "
";
            }
        }
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