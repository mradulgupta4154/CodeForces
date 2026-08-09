#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int>vec;
    for(int i=0;i<12;i++){
        int b;
        cin>>b;
        vec.push_back(b);
    }
    sort(vec.rbegin(),vec.rend());
    int ans=0;
    int count=0;
    for(int i=0;i<vec.size();i++){
        if(ans<m){
          ans+=vec[i];
          count++;
        }
        else{
            break;
        }
    }
    if(ans<m) cout<<-1<<endl;
    else cout<<count<<endl;
    
    return 0;
}