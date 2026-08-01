#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int height = 0;
    int cubes_needed = 0;
    int i = 1;
    
    while (n >= cubes_needed + i) {
        cubes_needed += i;
        n -= cubes_needed;
        height++;
        i++;
    }
    
    cout << height << endl;
    return 0;
}
 