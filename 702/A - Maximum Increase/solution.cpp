#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int current = 1;
    int maximum = 1;
    
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            current++;
        } else {
            if (current > maximum) {
                maximum = current;
            }
            current = 1;
        }
    }
    
    if (current > maximum) {
        maximum = current;
    }
    
    cout << maximum << endl;
    return 0;
}