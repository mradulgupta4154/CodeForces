#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec;
    int total=0;
    while(n--){
        int b;
        cin>>b;
        vec.push_back(b);
        total+=b;
    }
    sort(vec.rbegin(),vec.rend());
    int ans=0,count=0;
    for(int i=0;i<vec.size();i++){
        ans+=vec[i];
        count++;
        if(ans*2>total) break;
    }
    cout<<count<<endl;
    
 
    return 0;
}