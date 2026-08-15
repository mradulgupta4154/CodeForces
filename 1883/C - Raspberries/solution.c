#include <stdio.h>
 
int min(int a, int b) {
    return (a < b) ? a : b;
}
 
void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
 
    int even_count = 0;
    int min_ops = k; // Upper bound since ops per element is strictly < k
 
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
 
        if (a % 2 == 0) {
            even_count++;
        }
 
        int rem = a % k;
        int ops = (rem == 0) ? 0 : (k - rem);
        min_ops = min(min_ops, ops);
    }
 
    if (k == 4) {
        int ops_for_two_evens;
        if (even_count >= 2) {
            ops_for_two_evens = 0;
        } else if (even_count == 1) {
            ops_for_two_evens = 1;
        } else {
            ops_for_two_evens = 2;
        }
        min_ops = min(min_ops, ops_for_two_evens);
    }
 
    printf("%d
", min_ops);
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