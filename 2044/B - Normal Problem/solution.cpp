#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string c;
        cin>>c;
        reverse(c.begin(),c.end());
        string ans="";
        for(int i=0;i<c.length();i++){
            if(c[i]=='q') ans+='p';
            else if(c[i]=='p') ans+='q';
            else ans+=c[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
 
 
}