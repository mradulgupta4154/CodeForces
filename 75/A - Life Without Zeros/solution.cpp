#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int zero(int a){
    string c= to_string(a);
    string s="";
    for(int i =0;i<c.length();i++){
        if(c[i]=='0') continue;
        else s+=c[i];
    }
    int ans =std::stoi(s);
    return ans;
}
 
int main() {
    int a,b;
    cin>>a>>b;
    int c=a+b;
    int d= zero(a);
    int e = zero(b);
    int f=zero(c);
    if(d+e==f) cout<<"YES";
    else cout<<"NO";
    return 0;
    
}