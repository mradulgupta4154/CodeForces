#include <stdio.h>
 
long long min(long long a, long long b) {
    return (a < b) ? a : b;
}
 
void solve() {
    long long x, y, a, b;
    scanf("%lld %lld", &x, &y);
    scanf("%lld %lld", &a, &b);
 
    // Option 1: Reduce both numbers individually
    long long cost1 = (x + y) * a;
 
    // Option 2: Align numbers using operation 1, then reduce together using operation 2
    long long min_val = min(x, y);
    long long diff = (x > y) ? (x - y) : (y - x);
    long long cost2 = diff * a + min_val * b;
    printf("%lld
", min(cost1, cost2));
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