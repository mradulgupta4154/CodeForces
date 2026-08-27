#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    string a;
    cin>>a;
    vector<string>vec;
    for(int i=0;i<5;i++){
        string b;
        cin>>b;
        vec.push_back(b);
    }
    bool color=false;
    bool no=false;
    for(int i=0;i<5;i++){
        if(a[1]==vec[i][1]) color=true;
        if(a[0]==vec[i][0]) no =true;
    }
    if(color or no) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}