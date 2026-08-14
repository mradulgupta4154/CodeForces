#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    if (cin >> n >> m >> a) {
        long long length_count = (n + a - 1) / a;
        long long width_count = (m + a - 1) / a;
        
        cout << length_count * width_count << endl;
    }
    return 0;
}