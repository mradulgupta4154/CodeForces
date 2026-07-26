#include <iostream>
#include <cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string ans="";
    for(int i =1;i<=t;i++){
        if(i%2==0){
            ans+="I love " ;
        }else {
            ans+="I hate " ;
        }
        if(i!=t){
            ans+="that ";
        }else{
            ans+="it";
        }
 
    }
    cout<<ans;
    return 0;
}
    
    