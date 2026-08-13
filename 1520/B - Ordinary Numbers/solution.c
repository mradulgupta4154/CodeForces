#include <stdio.h>
 
void solve() {
    long long n;
    scanf("%lld", &n);
 
    int count = 0;
 
    // Generate repunits: 1, 11, 111, 1111, ..., 111111111
    for (long long base = 1; base <= 1000000000LL; base = base * 10 + 1) {
        // For each digit d from 1 to 9
        for (int d = 1; d <= 9; d++) {
            if (base * d <= n) {
                count++;
            }
        }
    }
 
    printf("%d
", count);
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