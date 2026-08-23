#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    int ways = 0;
    
    // Check all possible values of l from 1 up to n / 2
    for (int l = 1; l <= n / 2; l++) {
        if (n % l == 0) {
            ways++;
        }
    }
 
    printf("%d
", ways);
    return 0;
}