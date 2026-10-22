#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
 
    int iters = 0;
    while (true) {
        // Step 1: Find any i such that a[i] > b[i] and decrease it
        bool step1_done = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                a[i]--;
                step1_done = true;
                break;
            }
        }
 
        // If step 1 was ignored, this is the last iteration
        if (!step1_done) {
            iters++;
            break;
        }
 
        // Step 2: Find any i such that a[i] < b[i] and increase it
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                a[i]++;
                break;
            }
        }
 
        iters++;
    }
 
    cout << iters << "
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