#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int c3 = min(26, n - 2);
    int c2 = min(26, n - c3 - 1);
    int c1 = n - c3 - c2;
    
    string result = "";
    result += (char)('a' + c1 - 1);
    result += (char)('a' + c2 - 1);
    result += (char)('a' + c3 - 1);
    
    cout << result << "
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