#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<int> f(m);
    for (int i = 0; i < m; ++i) {
        cin >> f[i];
    }
 
    sort(f.begin(), f.end());
 
    int min_diff = 1e9;
    for (int i = 0; i <= m - n; ++i) {
        int diff = f[i + n - 1] - f[i];
        min_diff = min(min_diff, diff);
    }
 
    cout << min_diff << "
";
 
    return 0;
}