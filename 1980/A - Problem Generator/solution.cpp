#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
 
    vector<int> freq(7, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
 
    int missing = 0;
    for (int i = 0; i < 7; i++) {
        if (freq[i] < m) {
            missing += (m - freq[i]);
        }
    }
 
    cout << missing << "
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