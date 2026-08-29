#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int val = stoi(s);
    
    int r = round(sqrt(val));
    if (r * r == val) {
        cout << 0 << " " << r << "
";
    } else {
        cout << -1 << "
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