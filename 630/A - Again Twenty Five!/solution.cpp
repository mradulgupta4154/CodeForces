#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    if (n == 0) {
        cout << 1 % 100 << endl;
        return 0;
    }
 
    long long result = 1, base = 5 % 100;
    long long exp = n;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % 100;
        base = (base * base) % 100;
        exp /= 2;
    }
    cout << result << endl;
    return 0;
}