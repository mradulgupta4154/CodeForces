#include <iostream>
using namespace std;
 
int main() {
    int n, total = 0;
    cin >> n;
    int a[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++) {
        total += n / a[i];
        n %= a[i];
    }
    cout << total << endl;
    return 0;
}