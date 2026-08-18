#include <iostream>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    bool happy = false;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a != b) {
            happy = true;
        }
    }
 
    if (happy) {
        cout << "Happy Alex
";
    } else {
        cout << "Poor Alex
";
    }
 
    return 0;
}