#include <stdio.h>
 
void solve() {
    int n;
    scanf("%d", &n);
 
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        sum += a;
    }
 
    if (sum == n) {
        printf("0
");
    } else if (sum < n) {
        printf("1
");
    } else {
        printf("%lld
", sum - n);
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