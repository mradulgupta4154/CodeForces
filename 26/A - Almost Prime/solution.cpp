#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    int prime_count[3005] = {0};
 
    // Sieve to count distinct prime factors
    for (int i = 2; i <= n; i++) {
        // If prime_count[i] is 0, i is a prime number
        if (prime_count[i] == 0) {
            for (int j = 2 * i; j <= n; j += i) {
                prime_count[j]++;
            }
        }
    }
 
    // Count numbers with exactly 2 distinct prime factors
    int almost_prime_count = 0;
    for (int i = 1; i <= n; i++) {
        if (prime_count[i] == 2) {
            almost_prime_count++;
        }
    }
 
    printf("%d
", almost_prime_count);
 
    return 0;
}