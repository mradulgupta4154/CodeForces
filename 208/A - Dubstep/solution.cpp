#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
 
    string result = "";
    bool is_first = true;
 
    for (size_t i = 0; i < s.length(); ) {
        // Check if current substring starts with "WUB"
        if (i + 2 < s.length() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 3;
        } else {
            // If it's not the first word, print a space before it
            if (!is_first) {
                cout << " ";
            }
            // Read the entire non-"WUB" word
            while (i < s.length() && !(i + 2 < s.length() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')) {
                cout << s[i];
                i++;
            }
            is_first = false;
        }
    }
    cout << "
";
 
    return 0;
}