#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    char s[105];
    scanf("%s", s);
 
    int max_count = 0;
    char best_twogram[3] = "";
 
    // Iterate through every adjacent pair of characters
    for (int i = 0; i < n - 1; i++) {
        int current_count = 0;
 
        // Count occurrences of s[i]s[i+1] in the string s
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == s[i] && s[j + 1] == s[i + 1]) {
                current_count++;
            }
        }
 
        // Update the result if this two-gram has a higher frequency
        if (current_count > max_count) {
            max_count = current_count;
            best_twogram[0] = s[i];
            best_twogram[1] = s[i + 1];
            best_twogram[2] = '\0';
        }
    }
 
    printf("%s
", best_twogram);
 
    return 0;
}