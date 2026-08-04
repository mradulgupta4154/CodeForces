#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
 
        vector<int> prefix(n+1, 0); // prefix[i] = count of 2's in a[0..i-1]
        for(int i = 0; i < n; i++)
            prefix[i+1] = prefix[i] + (vec[i] == 2 ? 1 : 0);
 
        int total = prefix[n];
        int ans = -1;
        for(int k = 1; k <= n-1; k++){
            int leftTwos = prefix[k];
            int rightTwos = total - prefix[k];
            if(leftTwos == rightTwos){
                ans = k;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}