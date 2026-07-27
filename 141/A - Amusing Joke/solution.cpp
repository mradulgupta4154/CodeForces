#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    string d = a+b;
 
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());
    if(c==d) cout<<"YES";
    else cout<<"NO";
    
}