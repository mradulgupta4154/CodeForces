#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main() {
    int n ;
    cin>>n;
    long long sum=0;
    while(n--){
        int a;
        cin>>a;
        if(a%2==0){
            cout<<(a-1)/2<<endl;
        }
        else{
            cout<<a/2<<endl;
        }
        
        
    }
    return 0;
}