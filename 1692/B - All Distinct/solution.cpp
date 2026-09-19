#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        unique_elements.insert(x);
    }
    
    int k = unique_elements.size();
    
    if ((n - k) % 2 == 0) {
        cout << k << "
";
    } else {
        cout << k - 1 << "
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