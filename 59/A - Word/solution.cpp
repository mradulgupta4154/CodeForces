#include <iostream>
#include<cmath>
#include<cctype>
using namespace std;
int main(){
    string word;
    cin>>word;
    string ans="";
    int upper=0,lower=0;
    for(int i =0;i<word.length();i++){
        if(isupper(word[i])) upper++;
        else lower++;
    }
    for(int i =0;i<word.length();i++){
        if(upper>word.length()/2){
            ans+=toupper(word[i]);
        }
        else{
            ans+=tolower(word[i]);
        }
    }
    cout<<ans;
    return 0;
 
    
}