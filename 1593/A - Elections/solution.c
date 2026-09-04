#include <stdio.h>
 
long long max(long long a, long long b) {
    return (a > b) ? a : b;
}
 
long long get_needed(long long current, long long other1, long long other2) {
    long long highest_other = max(other1, other2);
    return max(0, highest_other - current + 1);
}
 
void solve() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
 
    long long ans_a = get_needed(a, b, c);
    long long ans_b = get_needed(b, a, c);
    long long ans_c = get_needed(c, a, b);
 
    printf("%lld %lld %lld
", ans_a, ans_b, ans_c);
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