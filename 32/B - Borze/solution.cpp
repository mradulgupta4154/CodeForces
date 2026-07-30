#include <iostream>
#include <algorithm>
#include<vector>
#include <stack>
using namespace std;
 
int main() {
    string s, res;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            res += '0';
        } else { // s[i] == '-'
            i++; // consume the next char too
            res += (s[i] == '.') ? '1' : '2';
        }
    }
    cout << res << endl;
    return 0;
 
}