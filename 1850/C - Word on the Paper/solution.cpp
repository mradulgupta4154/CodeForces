#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string word = "";
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char ch;
            cin >> ch;
            if (ch != '.') {
                word += ch;
            }
        }
    }
    
    cout << word << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}