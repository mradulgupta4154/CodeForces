#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    if (n >= 0) {
        cout << n << "
";
    } else {
        int option1 = n / 10;
        int option2 = (n / 100) * 10 + (n % 10);
        cout << max({n, option1, option2}) << "
";
    }
    
    return 0;
}