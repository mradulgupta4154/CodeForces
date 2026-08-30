#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, t;
    cin >> s >> t;
 
    int pos = 0; // 0-based index for string s
    for (char instruction : t) {
        if (s[pos] == instruction) {
            pos++;
        }
    }
 
    // Output 1-based position
    cout << pos + 1 << "
";
 
    return 0;
}