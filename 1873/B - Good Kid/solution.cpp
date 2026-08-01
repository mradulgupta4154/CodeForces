#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        for(int i =0;i<n;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        int maxi=1;
        sort(vec.begin(),vec.end());
        vec[0]+=1;
        for(int i=0;i<n;i++){
            maxi*=vec[i];       
        }
        cout<<maxi<<endl;
    }
    return 0;
}