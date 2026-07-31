#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> t1, t2, t3;
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        if (val == 1) t1.push_back(i);
        else if (val == 2) t2.push_back(i);
        else if (val == 3) t3.push_back(i);
    }
    int w = min({t1.size(), t2.size(), t3.size()});
    cout << w << endl;
    for (int i = 0; i < w; i++) {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << endl;
    }
    return 0;
}