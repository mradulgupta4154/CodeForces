#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int len = to_string(x).length();
        int digit = x % 10;
        int ans = (digit - 1) * 10 + (len * (len + 1) / 2);
        cout << ans << "
";
    }
    return 0;
}
 