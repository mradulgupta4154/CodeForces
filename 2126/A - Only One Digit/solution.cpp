#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        string s=to_string(c);
        sort(s.begin(),s.end());
        int a=s[0]-'0';
        cout<<a<<endl;
    }
    
    return 0;
 
 
}