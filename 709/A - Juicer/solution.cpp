#include <iostream>
using namespace std;
 
int main() {
    int n;
    long long b, d;
    cin >> n >> b >> d;
 
    long long curr_waste = 0;
    int empty_count = 0;
 
    for (int i = 0; i < n; i++) {
        long long c;
        cin >> c;
 
        // Skip oranges larger than b
        if (c > b) continue;
 
        // Add orange to juicer
        curr_waste += c;
 
        // Empty the waste section if it exceeds d
        if (curr_waste > d) {
            empty_count++;
            curr_waste = 0;
        }
    }
 
    cout << empty_count << endl;
 
    return 0;
}