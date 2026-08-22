#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int a;
        cin >> a;
        vector<int> vec;
        for(int i = 0; i < a; i++){
            int b;
            cin >> b;
            vec.push_back(b);
        }
 
        vector<int> a1, b1;
        for(int i = 0; i < (a+1)/2; i++) a1.push_back(vec[i]);
        for(int i = (a+1)/2; i < a; i++) b1.push_back(vec[i]);
        reverse(b1.begin(), b1.end());
 
        vector<int> ans(a);
        for(int i = 0; i < a; i++){
            if(i % 2 == 0) ans[i] = a1[i/2];
            else           ans[i] = b1[i/2];
        }
 
        for(int i = 0; i < a; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}