#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
 
    string target = "hello";
    int target_idx = 0;
 
    for (char c : s) {
        if (c == target[target_idx]) {
            target_idx++;
        }
        if (target_idx == target.length()) {
            cout << "YES
";
            return 0;
        }
    }
 
    cout << "NO
";
    return 0;
}