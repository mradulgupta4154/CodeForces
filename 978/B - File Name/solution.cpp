#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int removals = 0;
    for (int i = 2; i < n; ++i) {
        if (s[i] == 'x' && s[i - 1] == 'x' && s[i - 2] == 'x') {
            removals++;
        }
    }
 
    cout << removals << "
";
    return 0;
}