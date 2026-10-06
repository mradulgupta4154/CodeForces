#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    bool has67 = false;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 67) {
            has67 = true;
        }
    }
    
    if (has67) {
        cout << "YES
";
    } else {
        cout << "NO
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