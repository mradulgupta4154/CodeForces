#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        string c;
        cin>>c;
        set<char>s(c.begin(),c.end());
        if(s.size()==1) cout<<"NO"<<endl;
        else{
            for(int i=0;i<c.length();i++){
                if(c[i]!=c[i+1]){
                    swap(c[i],c[i+1]);
                    break;
                }
            }
            cout<<"YES"<<endl;
            cout<<c<<endl;
        }
        
        
    }
    return 0;
}