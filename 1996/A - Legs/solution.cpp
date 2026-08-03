#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin>>n;
        int count=0;
        if(n%4==0){
            count+=n/4;
        }else{
            int c=n%4;
            count+=(n-c)/4+c/2;
        }
        cout<<count<<endl;
    }
    
 
    return 0;
}