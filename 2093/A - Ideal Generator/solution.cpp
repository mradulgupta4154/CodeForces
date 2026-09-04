#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
        int a;
        cin>>a;
        if(a%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}