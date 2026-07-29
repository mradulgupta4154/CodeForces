#include <iostream>
#include <algorithm>
#include<vector>
#include <set>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string c="codeforces";
    set<char>s(c.begin(),c.end());
    while(n--){
        char a;
        cin>>a;
        if(s.contains(a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
 
}