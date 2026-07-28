#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int>vec;
    for(int i =1;i<=n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int v=0;
    int c=0;
    int l=0,r=n-1;
    for(int turn =0;l<=r;turn++){
        int taken;
        if(vec[l]>=vec[r]){taken=vec[l];l++;}
        else{taken=vec[r];r--;}
 
        if(turn%2==0) v+=taken;
        else c+=taken;
 
    }
    cout<<v<<" "<<c<<endl;
    return 0;
    
    
    
}