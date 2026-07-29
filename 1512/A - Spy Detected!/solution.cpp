#include <iostream>
#include <algorithm>
#include<vector>
#include <unordered_map>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int>vec;
        for(int i =0;i<a;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        unordered_map<int,int>m;
        for(int i =0;i<vec.size();i++){
            m[vec[i]]++;
        }
        int b;
 
        for(auto&[num,count]:m){
            if(count==1){
                b=num;
            }
        }
        for(int i =0;i<vec.size();i++){
            if(vec[i]==b){
                cout<<i+1<<endl;
                break;
            }
        }
        
    }
    
    return 0;
 
}