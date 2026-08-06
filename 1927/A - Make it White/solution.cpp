#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        string b;
        cin>>b;
        vector<int>vec;
        for(int i=0;i<c;i++){
            if(b[i]=='B') vec.push_back(i);
        }
        int e=*min_element(vec.begin(),vec.end());
        int d=*max_element(vec.begin(),vec.end());
        cout<<(d-e+1)<<endl;
 
        
    }
    
    return 0;
 
 
}