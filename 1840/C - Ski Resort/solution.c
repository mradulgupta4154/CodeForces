#include <stdio.h>
 
void solve() {
    int n, k;
    long long q;
    scanf("%d %d %lld", &n, &k, &q);
 
    long long total_ways = 0;
    long long current_len = 0;
 
    for (int i = 0; i < n; i++) {
        long long temp;
        scanf("%lld", &temp);
 
        if (temp <= q) {
            current_len++;
        } else {
            if (current_len >= k) {
                long long len = current_len - k + 1;
                total_ways += (len * (len + 1)) / 2;
            }
            current_len = 0;
        }
    }
 
    if (current_len >= k) {
        long long len = current_len - k + 1;
        total_ways += (len * (len + 1)) / 2;
    }
 
    printf("%lld
", total_ways);
}
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}