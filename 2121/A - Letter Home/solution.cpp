#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, s;
        cin >> n >> s;
 
        int mn = INT_MAX;
        int mx = INT_MIN;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            mn = min(mn, x);
            mx = max(mx, x);
        }
 
        int ans = (mx - mn) + min(abs(s - mn), abs(s - mx));
 
        cout << ans << '
';
    }
 
    return 0;
}