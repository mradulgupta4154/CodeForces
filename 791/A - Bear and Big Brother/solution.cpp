#include <iostream>
#include  <vector>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    for(int i =1;i<=1000;i++){
        if(a*pow(3,i)-b*pow(2,i)>0){
            cout<<i;
            break;
        }
    }
    
    
    return 0;
}