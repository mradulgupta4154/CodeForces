#include <iostream>
#include <algorithm>
#include<vector>
#include <unordered_map>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int maxi=max({a,b,c});
        int mini=min({a,b,c});
        if(a>mini and a<maxi) cout<<a<<endl;
        else if(b>mini and b<maxi) cout<<b<<endl;
        else if (c>mini and c<maxi) cout<<c<<endl;
 
        
        
        
    }
    
    return 0;
 
}