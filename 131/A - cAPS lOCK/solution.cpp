#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[101];
    if (scanf("%100s", s) != 1) return 0;
 
    int len = strlen(s);
    int change_case = 1;
    for (int i = 1; i < len; i++) {
        if (islower(s[i])) {
            change_case = 0;
            break;
        }
    }
    if (change_case) {
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
    }
 
    printf("%s
", s);
    return 0;
}