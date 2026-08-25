#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=(b<c?(c-b)+c:b);
        if(d>a) cout<<1<<endl;
        else if(a>d) cout<<2<<endl;
        else cout<<3<<endl;
 
    }
}