#include <iostream>
#include <algorithm>
#include<vector>
#include <stack>
using namespace std;
 
int main() {
    int d;
    cin>>d;
    vector<int>vec;
    for(int i =0;i<d;i++){
        int b;
        cin>>b;
        vec.push_back(b);
    }
    int m =*max_element(vec.begin(),vec.end());
    int ans=0;
    for(int i =0;i<d;i++){
        ans+=m-vec[i];
    }
    cout<<ans<<endl;
    return 0;
}