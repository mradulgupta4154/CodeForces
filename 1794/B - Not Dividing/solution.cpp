#include <stdio.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
 
    long long a[10005];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        // Step 1: Replace all 1s with 2s
        if (a[i] == 1) {
            a[i]++;
        }
    }
 
    // Step 2: Ensure a[i+1] is not divisible by a[i]
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] % a[i] == 0) {
            a[i + 1]++;
        }
    }
 
    // Print the resulting array
    for (int i = 0; i < n; i++) {
        printf("%lld%c", a[i], i == n - 1 ? '
' : ' ');
    }
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