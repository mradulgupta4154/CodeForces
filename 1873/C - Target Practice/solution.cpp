#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--) {
        vector<vector<char>> vec(10, vector<char>(10));
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> vec[i][j];
            }
        }
 
        int sum = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(vec[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j});
                    sum += ring + 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}