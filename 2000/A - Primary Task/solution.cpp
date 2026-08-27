#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        string a;
        cin>>a;
        int c=stoi(a);
        if(a[0]=='1' and a[1]=='0'){
            if(a.length()>2 and c%100>1 and a[2]!='0') cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
     
        
    }
    return 0;
}