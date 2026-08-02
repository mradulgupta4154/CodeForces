#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    
    if (mp.size() > 2) {
        cout << "No
";
    } else if (mp.size() == 1) {
        cout << "Yes
";
    } else {
        auto it = mp.begin();
        int c1 = it->second;
        it++;
        int c2 = it->second;
        
        if (abs(c1 - c2) <= 1) {
            cout << "Yes
";
        } else {
            cout << "No
";
        }
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