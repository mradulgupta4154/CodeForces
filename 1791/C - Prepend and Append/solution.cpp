#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
 
int main() {
    int d;
    cin >> d;
    while (d--) {
        int a;
        cin >> a;
        string c;
        cin >> c;
 
        int lo = 0, hi = (int)c.length() - 1;
        while (lo < hi && ((c[lo] == '0' && c[hi] == '1') || (c[lo] == '1' && c[hi] == '0'))) {
            lo++;
            hi--;
        }
        cout << (hi - lo + 1) << endl;
    }
}