#include <stdio.h>
 
void solve() {
    int n;
    scanf("%d", &n);
 
    int a[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
 
    for (int i = 0; i < n; i++) {
        int b;
        char moves[15];
        scanf("%d %s", &b, moves);
 
        // Reverse the moves
        for (int j = 0; j < b; j++) {
            if (moves[j] == 'U') {
                a[i] = (a[i] + 9) % 10; // Equivalent to -1
            } else if (moves[j] == 'D') {
                a[i] = (a[i] + 1) % 10; // Equivalent to +1
            }
        }
    }
 
    // Output the reconstructed initial state
    for (int i = 0; i < n; i++) {
        printf("%d%c", a[i], (i == n - 1) ? '
' : ' ');
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