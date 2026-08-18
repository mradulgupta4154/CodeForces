#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int m;
    cin >> m;
    vector<int> prices(m);
    for(int i = 0; i < m; i++) cin >> prices[i];
 
    sort(prices.begin(), prices.end());
 
    int n;
    cin >> n;
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        // number of prices <= c
        ans[i] = upper_bound(prices.begin(), prices.end(), c) - prices.begin();
    }
 
    for(int i = 0; i < n; i++){
        cout << ans[i] << "
";
    }
 
    return 0;
}