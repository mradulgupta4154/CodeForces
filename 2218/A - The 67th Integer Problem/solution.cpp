#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b==67) cout<<67<<endl;
        else{
         cout<<b+1<<endl;
        }
    }
    return 0;
}