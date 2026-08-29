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
        int maxi=-1;
        for(int i=0;i<b;i++){
            int c;
            cin>>c;
            if(c>maxi){
                maxi=c;
            }
        }
        cout<<maxi*b<<endl;
    }
}