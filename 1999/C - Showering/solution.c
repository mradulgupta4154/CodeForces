#include <stdio.h>
#include <stdbool.h>
 
void solve() {
    int n;
    long long s, m;
    scanf("%d %lld %lld", &n, &s, &m);
 
    long long prev_r = 0;
    bool can_shower = false;
 
    for (int i = 0; i < n; i++) {
        long long l, r;
        scanf("%lld %lld", &l, &r);
 
        // Check gap between previous end time (or 0) and current start time
        if (l - prev_r >= s) {
            can_shower = true;
        }
        prev_r = r;
    }
 
    // Check gap after the last task until end of day (m)
    if (m - prev_r >= s) {
        can_shower = true;
    }
 
    if (can_shower) {
        printf("YES
");
    } else {
        printf("NO
");
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