#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    vector<string> grid(8);
    for (int i = 0; i < 8; ++i) {
        cin >> grid[i];
    }
 
    bool red_last = false;
    for (int i = 0; i < 8; ++i) {
        if (grid[i] == "RRRRRRRR") {
            red_last = true;
            break;
        }
    }
 
    if (red_last) {
        cout << "R
";
    } else {
        cout << "B
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