#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        int odd=0,even=0;
        for(int i=0;i<2*c;i++){
            int b;
            cin>>b;
            if(b%2==0) even++;
            else odd++;
        }
        cout<<(odd==even?"YES":"NO")<<endl;
        
    }
    
    return 0;
 
 
}