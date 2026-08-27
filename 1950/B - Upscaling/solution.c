#include <stdio.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    
    // Total size of the grid is 2n x 2n
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            // Determine block coordinates: i / 2 and j / 2
            // If the sum of block coordinates is even, print '#', else '.'
            if ((i / 2 + j / 2) % 2 == 0) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("
");
    }
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}