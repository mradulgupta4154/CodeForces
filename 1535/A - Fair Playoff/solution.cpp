#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int>vec({a,b,c,d});
        sort(vec.begin(),vec.end());
        int e=vec[3];
        int f=vec[2];
        int s,g;
        if(a>b) s=a;
        else s=b;
        if(c>d) g=c;
        else g=d;
        if((s==e or s==f) and (g==e or g==f)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
 
 
}