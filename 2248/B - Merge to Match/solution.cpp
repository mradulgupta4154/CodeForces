#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<long long> a(n), b(m);
        for (auto &x : a) scanf("%lld", &x);
        for (auto &x : b) scanf("%lld", &x);
 
        if (n < 2 * m) {
            printf("NO
");
            continue;
        }
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
 
        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (a[i] >= b[i]) { ok = false; break; }
        }
        if (ok) {
            for (int i = 0; i < m; i++) {
                if (a[n - m + i] <= b[i]) { ok = false; break; }
            }
        }
 
        printf(ok ? "YES
" : "NO
");
    }
    return 0;
}