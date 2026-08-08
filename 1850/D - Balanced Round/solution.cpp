#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    int m ;
    cin>>m;
    stack<int>s;
    while(m--){
        int n ,k;
        cin>>n>>k;
 
        vector<long long>vec;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        int count=1,best=1;
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            if(vec[i]-vec[i-1]<=k){
                count++;
            }
            else {
                count=1;
            }
            best=max(best,count);
        }
        cout<<n-best<<endl;
    }
 
 
    return 0;
}