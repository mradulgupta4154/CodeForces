#include <iostream>
#include <string>
using namespace std;
 
int main() {    
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    
    long long total = 0;
    for (int i = 0; i < s.length(); i++) {
        int strip = s[i] - '0';
        total += a[strip - 1];
    }
    
    cout << total << "
";
    return 0;
}