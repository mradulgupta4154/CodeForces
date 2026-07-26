#include <iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string c,d;
    cin>>c;
    cin>>d;
    string ans="";
    for(int i =0;i<c.length();i++){
        ans+=(((c[i]-'0')^(d[i]-'0'))+'0');
    }
    cout<<(ans);
    return 0;
}
 
    