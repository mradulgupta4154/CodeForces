#include <iostream>
#include <algorithm>
#include<vector>
#include <stack>
using namespace std;
 
int main() {
    int n ;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>vec{a,b,c};
        sort(vec.begin(),vec.end());
        if(vec[2]+vec[1]>=10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
   
}