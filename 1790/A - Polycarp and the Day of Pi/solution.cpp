#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string pi = "314159265358979323846264338327";
    string s;
    cin >> s;
    
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == pi[i]) {
            count++;
        } else {
            break;
        }
    }
    cout << count << "
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