#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<bool> visited(26, false);
    bool distracted = false;
    
    for (int i = 0; i < n; i++) {
        visited[s[i] - 'A'] = true;
        // If next character is different and the next character was already visited
        if (i + 1 < n && s[i] != s[i + 1]) {
            if (visited[s[i + 1] - 'A']) {
                distracted = true;
                break;
            }
        }
    }
    
    if (distracted) {
        cout << "NO
";
    } else {
        cout << "YES
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