#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int count[5] = {0}; // To store frequency of group sizes 1, 2, 3, and 4
    for (int i = 0; i < n; i++) {
        int sz;
        cin >> sz;
        count[sz]++;
    }
 
    int taxis = 0;
 
    // 1. All groups of 4 get their own taxi
    taxis += count[4];
 
    // 2. Groups of 3 paired with groups of 1
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]); // Deduct matched groups of 1
 
    // 3. Groups of 2 paired together
    taxis += count[2] / 2;
    count[2] %= 2; // Check if 1 group of 2 is left
 
    // 4. Handle remaining 1 group of 2 (if any)
    if (count[2] == 1) {
        taxis++;
        count[1] = max(0, count[1] - 2); // Can fit up to two 1s in this taxi
    }
 
    // 5. Pack any leftover groups of 1 (4 per taxi)
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4; // Ceiling division
    }
 
    cout << taxis << "
";
 
    return 0;
}