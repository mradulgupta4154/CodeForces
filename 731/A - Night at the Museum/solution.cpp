#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    string t;
    cin>>t;
    int diff0=abs((int)t[0]-'a');
 
    int ans=min(diff0,26-diff0);
    for(int i=0;i<t.length()-1;i++ ){
        int diff=abs((int)t[i]-t[i+1]);
        ans+=min(diff,26-diff);
 
    }
    cout<<ans<<endl;
    
    return 0;
 
 
}