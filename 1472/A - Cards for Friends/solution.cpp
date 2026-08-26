#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int w,h,n;
        cin>>w>>h>>n;
        int ans=0;
        while(w%2==0 or h%2==0){
            if(w%2==0){
                w/=2;
                ans++;
            }
            if(h%2==0){
                h/=2;
                ans++;
            }
 
        }
        long long res=1;
        for(int i=0;i<ans;i++) res*=2;
        if(res>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    return 0;
}