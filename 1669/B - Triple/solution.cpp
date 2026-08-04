#include <iostream>
#include <vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=-1;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            m[b]++;
        }
        for(auto&[num,count]:m){
            if(count>=3){
                ans=num;
            }
        }
        cout<<ans<<endl;
 
    }
    return 0;
 
 
}