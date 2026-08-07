#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    k=k-1;
    long long odd=(n+1)/2;
    if(k<odd){
            
        cout<<2*k+1<<endl;
    }
    else{
        k=k-odd;     
        cout<<2*k+2<<endl;
 
    }
    
 
    return 0;
}