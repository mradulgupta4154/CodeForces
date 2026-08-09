#include <stdio.h>
 
void solve() {
    long long n;
    scanf("%lld", &n);
 
    long long i = 1;
    while (n % i == 0) {
        i++;
    }
 
    printf("%lld
", i - 1);
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