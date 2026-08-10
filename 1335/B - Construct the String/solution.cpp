#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    
    string s = "";
    for (int i = 0; i < n; ++i) {
        // Cycle through the first 'b' characters of the alphabet
        s += (char)('a' + (i % b));
    }
    cout << s << "
";
}
 
int main() {    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}