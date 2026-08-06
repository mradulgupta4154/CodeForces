#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string c;
        cin>>c;
        int u=0;
        int l=0;
        bool find=false;
        for(int i=0;i<c.length();i++){
            if(c[i]=='U') u++;
            else if(c[i]=='D') u--;
            else if(c[i]=='L') l--;
            else if(c[i]=='R') l++;
            if(l==1 and u==1) {
                find = true; 
                break;
            }
        }
        if(find) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
 
 
}