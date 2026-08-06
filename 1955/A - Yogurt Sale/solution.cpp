#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int c=min((n%2)*a+(n/2)*b,n*a);
        cout<<c<<endl;
    }
    
    return 0;
 
 
}