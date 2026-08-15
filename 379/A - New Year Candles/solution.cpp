#include <iostream>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int hours = 0;
    int went = 0; // Accumulated stubs
 
    while (a > 0) {
        hours += a;       
        went += a;     
        a = went / b;    
        went %= b;      
    }
 
    cout << hours << endl;
    return 0;
}