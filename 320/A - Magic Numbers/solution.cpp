#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    bool ok = true;
    
    if (s[0] != '1') ok = false;
    if (s.find("444") != string::npos) ok = false;
    
    for (char c : s) {
        if (c != '1' && c != '4') {
            ok = false;
            break;
        }
    }
    
    if (ok) cout << "YES
";
    else cout << "NO
";
    
    return 0;
}