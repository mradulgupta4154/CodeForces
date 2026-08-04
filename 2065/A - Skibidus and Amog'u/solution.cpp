#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string c=n.substr(0,n.length()-2);
        string ans=c+'i';
        cout<<ans<<endl;
        
    }
    return 0;
 
 
}