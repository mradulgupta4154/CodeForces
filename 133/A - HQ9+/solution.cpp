#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string c;
    cin>>c;
    bool find=false;
    for(int i=0;i<c.length();i++){
        if(c[i]=='H' or c[i]=='Q' or c[i]=='9') find=true;
 
    }
    if(find) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
 
    return 0;
}