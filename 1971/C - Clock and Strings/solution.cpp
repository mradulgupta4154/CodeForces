#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    // Ensure a < b
    if (a > b) swap(a, b);
 
    // Count how many of c and d lie strictly between a and b
    int count = 0;
    if (c > a && c < b) count++;
    if (d > a && d < b) count++;
 
    // Intersect if exactly one endpoint is inside (a, b)
    if (count == 1) {
        cout << "YES
";
    } else {
        cout << "NO
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