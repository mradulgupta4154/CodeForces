#include <stdio.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
 
    long long a[35];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
 
    int ans = 0;
    // Iterate backwards from the second-to-last element
    for (int i = n - 2; i >= 0; i--) {
        while (a[i] >= a[i + 1] && a[i] > 0) {
            a[i] /= 2;
            ans++;
        }
        // If a[i] could not be made strictly smaller than a[i+1]
        if (a[i] >= a[i + 1]) {
            printf("-1
");
            return;
        }
    }
 
    printf("%d
", ans);
}
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}