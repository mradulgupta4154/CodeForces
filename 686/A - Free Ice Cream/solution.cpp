#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    long long b; // total ice cream packs
    cin >> n >> b;
 
    int distressed = 0; // count of distressed children
 
    while (n--) {
        char c;
        long long d;
        cin >> c >> d;
 
        if (c == '+') {
            b += d;
        } else {
            if (b >= d) {
                b -= d;
            } else {
                distressed++;
            }
        }
    }
 
    cout << b << " " << distressed << "
";
    return 0;
}