#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        int i=1;
        int count=0;
        if(!is_sorted(vec.begin(),vec.end())){
            cout<<0<<endl;
            continue;
        }
        long long m=2e18;
        for(int i=0;i+1<n;i++){
            m=min(m,(long long)vec[i+1]-vec[i]);
        }
        long long ans=m/2+1;
        cout<<ans<<endl;
    }
    
 
    return 0;
}