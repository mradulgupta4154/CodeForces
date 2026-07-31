#include <iostream>
using namespace std;
 
// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
 
// Function to find the next prime after n
int nextPrime(int n) {
    int p = n + 1;
    while (!isPrime(p)) {
        p++;
    }
    return p;
}
 
int main() {
    int n, m;
    cin >> n >> m;
    
    if (nextPrime(n) == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}