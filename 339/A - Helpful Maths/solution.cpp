#include <iostream>
#include  <vector>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string c;
    cin>>c;
    vector<int>vec;
    for(int i =0;i<c.length();i++){
        if(c[i]=='+') continue;
        else vec.push_back(c[i]-'0');
    }
    sort(vec.begin(),vec.end());
    string ans="";
    for(int i=0;i<vec.size();i++){
        ans+=(char)(vec[i]+'0') ;
        if(i!=vec.size()-1) ans+='+';
    }
    cout<<ans;
    return 0;
}