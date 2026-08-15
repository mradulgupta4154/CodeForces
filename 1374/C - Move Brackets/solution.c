#include <stdio.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    
    char s[55];
    scanf("%s", s);
    
    int balance = 0;
    int moves = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) {
            moves++;
            balance = 0;
        }
    }
    
    printf("%d
", moves);
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