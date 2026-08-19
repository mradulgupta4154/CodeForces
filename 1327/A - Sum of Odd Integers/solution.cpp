#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        if (n % 2 == k % 2 && n >= k * k) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}