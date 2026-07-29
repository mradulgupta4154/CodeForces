#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_streak = 0, current_streak = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                current_streak++;
                max_streak = max(max_streak, current_streak);
            } else {
                current_streak = 0;
            }
        }
        cout << max_streak << "
";
    }
    return 0;
}