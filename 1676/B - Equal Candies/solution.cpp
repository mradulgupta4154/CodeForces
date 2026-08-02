#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
        vector<int>vec;
        while(a--){
            int b;
            cin>>b;
            vec.push_back(b);           
        }
        int c=*min_element(vec.begin(),vec.end());
        int ans=0;
        for(int i=0;i<vec.size();i++){
            ans+=vec[i]-c;
 
        }
        cout<<ans<<endl;
 
 
    }
 
    return 0;
}