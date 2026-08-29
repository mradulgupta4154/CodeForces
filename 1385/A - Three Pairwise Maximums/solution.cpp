#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
 
    if (a[1] != a[2]) {
        cout << "NO
";
    } else {
        cout << "YES
";
        cout << a[0] << " " << a[0] << " " << a[2] << "
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