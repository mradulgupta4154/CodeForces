#include <stdio.h>
 
int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
 
    if (n < m) {
        printf("-1
");
    } else {
        int min_moves = (n + 1) / 2;
        int ans = ((min_moves + m - 1) / m) * m;
        printf("%d
", ans);
    }
 
    return 0;
}