#include <iostream>
#include <string>
#include <vector>
#include <cmath>
 
using namespace std;
 
void solve() {
    string keyboard, s;
    cin >> keyboard >> s;
 
    vector<int> pos(26);
    for (int i = 0; i < 26; ++i) {
        pos[keyboard[i] - 'a'] = i;
    }
 
    int total_time = 0;
    for (size_t i = 1; i < s.length(); ++i) {
        total_time += abs(pos[s[i] - 'a'] - pos[s[i - 1] - 'a']);
    }
 
    cout << total_time << "
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