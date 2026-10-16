#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    while(k--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a+b+c>=x+y and a+c>=x and b+c>=y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}