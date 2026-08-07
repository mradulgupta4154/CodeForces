#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while (n--) {
        long long b;
        cin >> b;
 
        int t = 0, th = 0;
        while (b % 2 == 0) { b /= 2; t++; }
        while (b % 3 == 0) { b /= 3; th++; }
 
        if (b != 1 || t > th) cout << -1 << endl;
        else cout << (2 * th - t) << endl;
    }
    return 0;
}