#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b and b==c and c==d and d==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}