#include <iostream>
#include <cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t="";
    for(int i =0;i<s.length();i++){
        t+=tolower(s[i]);
    }
    set<char>st(t.begin(),t.end());
    if(st.size()==26) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
    
    