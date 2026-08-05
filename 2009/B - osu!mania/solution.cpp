#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    // Process from bottom row to top row
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < 4; ++j) {
            if (grid[i][j] == '#') {
                cout << j + 1 << (i == 0 ? "" : " ");
                break;
            }
        }
    }
    cout << "
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