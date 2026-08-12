#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int x;
    cin >> x;
 
    // Maximum sum possible with distinct digits 1-9 is 45
    if (x > 45) {
        cout << -1 << "
";
        return;
    }
 
    vector<int> digits;
    // Pick the largest possible distinct digits from 9 down to 1
    for (int d = 9; d >= 1; d--) {
        if (x >= d) {
            digits.push_back(d);
            x -= d;
        }
    }
 
    // Print digits in ascending order to form the smallest number
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }
    cout << "
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