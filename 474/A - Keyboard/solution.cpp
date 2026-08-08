#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int idx(char a){
    int idx=0;
    vector<string>v={"q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l",";","z","x","c","v","b","n","m",",",".","/"};
    for(int i=0;i<v.size();i++){
        if(a==v[i][0]){
            idx=i;
        }
 
    }
    return idx;
}
string val(int a){
    vector<string>v={"q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l",";","z","x","c","v","b","n","m",",",".","/"};
    return v[a]; 
}
int main(){
    string c ;
    cin>>c;
    string s;
    cin>>s;
    string ans="";
    if(c=="R"){
        for(int i=0;i<s.length();i++){
            ans+=val(idx(s[i])-1);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            ans+=val(idx(s[i])+1);
        }
    }
    cout<<ans<<endl;
 
    
    return 0;
}