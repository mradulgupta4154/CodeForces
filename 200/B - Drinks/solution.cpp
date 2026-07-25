#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int og=n;
    double count=0;
    while(n--){
        int a ;
        cin>>a;
        count+=a;
    }
    cout<<count/og;
    return 0;
}
    