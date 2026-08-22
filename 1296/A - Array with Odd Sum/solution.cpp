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
        int odd=0,even=0;
        for(int i = 0; i < a; i++){
            int b;
            cin >> b;
            vec.push_back(b);
            if(b%2!=0) odd++;
            else even++;
        }
        if(odd%2!=0 or (odd >0 and even>0) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
       
    }
    return 0;
}