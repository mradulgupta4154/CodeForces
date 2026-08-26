#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans=0;
        int rem=0;
        if(m>a){
            ans+=a;
            rem+=m-a;
        }
        else{
            ans+=m;
        }
        if(m>b){
            ans+=b;
            rem+=m-b;
        }
        else{
            ans+=m;
            
        }
        if(rem>=c){
            ans+=c;
        }
        else{
            ans+=rem;
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}