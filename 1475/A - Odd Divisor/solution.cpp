#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        while(a%2==0) a/=2;
        if(a>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
 
    }
 
    return 0;
}