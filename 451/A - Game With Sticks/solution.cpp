#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (cin >> n >> m) {
        int moves = min(n, m);
        if (moves % 2 != 0) {
            cout << "Akshat
";
        } else {
            cout << "Malvika
";
        }
    }
 
    return 0;
}