#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        int mini=INT_MAX;
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            int c=vec[i]-vec[i-1];
            mini=min(c,mini);
        
        }
        cout<<mini<<endl;
    }
    return 0;
 
 
}