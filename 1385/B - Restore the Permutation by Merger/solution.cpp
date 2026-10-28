#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
 
    vector<int> p;
    vector<bool> vis(n + 1, false);
    for (int x : a) {
        if (!vis[x]) {
            vis[x] = true;
            p.push_back(x);
        }
    }
 
    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
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