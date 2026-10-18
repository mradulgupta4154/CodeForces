#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }
    
    int current_length = 0;
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        current_length += words[i].length();
        if (current_length <= m) {
            count++;
        } else {
            break; // If it doesn't fit, no further word can be included
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