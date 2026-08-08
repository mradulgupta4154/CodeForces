#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    int m ;
    cin>>m;
    while(m--){
        int n;
        cin>>n;
        int c=n/2021;
        bool find=false;
        for(int i=0;i<=c;i++){
            if((n-2021*i)%2020==0) find=true;
        }
        if (find) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}