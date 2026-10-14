#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int first_idx = -1;
    int last_idx = -1;
 
    // Find the first and last positions of '1'
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            if (first_idx == -1) {
                first_idx = i;
            }
            last_idx = i;
        }
    }
 
    // If there are no 1s, 0 deletions are needed
    if (first_idx == -1) {
        cout << 0 << "
";
        return;
    }
 
    // Count 0s between the first and last 1
    int zeros_to_erase = 0;
    for (int i = first_idx; i <= last_idx; i++) {
        if (s[i] == '0') {
            zeros_to_erase++;
        }
    }
 
    cout << zeros_to_erase << "
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