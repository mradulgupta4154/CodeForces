#include <iostream>
#include  <string>
using namespace std;
int main(){
    string c;
    cin>>c;
    string d;
    cin>>d;
    string ans="";
    for(int i =d.length()-1;i>=0;i--){
        ans+=d[i];
    }
    if(ans==c) cout<<"YES";
    else cout<<"NO";
   
    return 0;
}