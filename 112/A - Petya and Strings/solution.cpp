#include <iostream>
#include  <vector>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
string lower(string c){
    string ans="";
    for(int i =0;i<c.length();i++){
        ans+=tolower(c[i]);
    }
    return ans;
}
int main(){
    string c;
    cin>>c;
    string s;
    cin>>s;
    string c1=lower(c);
    string s1=lower(s);
    if(c1<s1) cout<<-1;
    else if(c1==s1) cout<<0;
    else cout<<1;
 
    
    return 0;
}