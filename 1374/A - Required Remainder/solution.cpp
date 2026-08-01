#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        long long maxi;
        if(b>c){
            maxi=-1;
        }else{
            maxi=b+a*((c-b)/a);
        }
        cout<<maxi<<endl;
    }
    return 0;
}