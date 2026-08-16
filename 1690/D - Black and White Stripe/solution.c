#include <stdio.h>
 
void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
 
    char s[200005];
    scanf("%s", s);
 
    int white_count = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            white_count++;
        }
    }
 
    int min_recolor = white_count;
 
    for (int i = k; i < n; i++) {
        if (s[i - k] == 'W') {
            white_count--;
        }
        if (s[i] == 'W') {
            white_count++;
        }
        if (white_count < min_recolor) {
            min_recolor = white_count;
        }
    }
 
    printf("%d
", min_recolor);
}
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
 
    while (t--) {
        solve();
    }
 
    return 0;
}