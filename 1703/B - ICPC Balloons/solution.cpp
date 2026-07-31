#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--){
        unordered_map<char,int>m;
        int d;
        cin>>d;
        string a;
        cin>>a;
        for(int i=0;i<a.length();i++){
            m[a[i]]++;
        }
        int ans=0;
        for(auto&[num,count]:m){
            if(count>=1){
                ans+=count+1;
            }
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}