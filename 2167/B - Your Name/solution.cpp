#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string c,d;
        cin>>c>>d;
        sort(c.rbegin(),c.rend());
        sort(d.rbegin(),d.rend());
 
        if(c==d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
 
 
}