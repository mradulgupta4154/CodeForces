#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    int first = -1, last = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    
    // Calculate the distance from the first closed door to the last closed door
    if (last - first + 1 <= x) {
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