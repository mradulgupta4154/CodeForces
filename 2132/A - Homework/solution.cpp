#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int m,n;
        string a,b,s;
        cin>>m;
        cin>>a;
        cin>>n;
        cin>>b;
        cin>>s;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='D'){
                a=a+b[i];
            }
            else{
                a=b[i]+a;
            }
        }
        cout<<a<<endl;
        
        
    }
    return 0;
}