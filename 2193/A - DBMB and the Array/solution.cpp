#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
        int n,s,x;
        cin>>n>>s>>x;
        int sum=0;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            sum+=b;
        }
        while(sum<s){
            sum+=x;
        }
        if(sum==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}