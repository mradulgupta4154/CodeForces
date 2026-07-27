#include <iostream>
#include <algorithm>
#include <cmath>
#include<vector>
using namespace std;
 
 
int main() {
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        vector<int>vec;
        while(n--){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        sort(vec.rbegin(),vec.rend());
        long long bob=0, alice=0;
        for(int i =0;i<vec.size();i++){
            if(i%2==0){
                if(vec[i]%2==0) alice+=vec[i];
            }else {
                if(vec[i]%2!=0) bob+=vec[i];
            }
 
        }
        if(alice>bob) cout<<"Alice"<<endl;
        else if(bob>alice) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
 
}