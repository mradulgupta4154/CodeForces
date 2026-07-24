#include <iostream>
#include<string>
using namespace std;
int main(){
    string c;
    cin>>c;
    int count=0;
    for(int i =0;i<c.length();i++){
        if(c[i]=='4' or c[i]=='7') {
            count++;
        }
    }
    if(count==4 or count==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}