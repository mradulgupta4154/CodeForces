#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string t;
    cin>>t;
    int o=0, maxo=0;
    for(int i=0;i<(int)t.length()-1;i++){
        if(t[i]==t[i+1]) o++;
        else o=0;
        maxo = max(maxo, o);
    }
    if(maxo>=6) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}