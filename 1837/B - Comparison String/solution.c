#include <stdio.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    
    char s[105];
    scanf("%s", s);
 
    int max_len = 1;
    int cur_len = 1;
 
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cur_len++;
        } else {
            cur_len = 1;
        }
        if (cur_len > max_len) {
            max_len = cur_len;
        }
    }
 
    printf("%d
", max_len + 1);
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