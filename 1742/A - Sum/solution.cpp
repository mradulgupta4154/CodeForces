#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main() {
    int n ;
    cin>>n;
    long long sum=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"YES"<<endl;
        }
        else if(a+c==b){
            cout<<"YES"<<endl;
        }
        else if(c+b==a){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}