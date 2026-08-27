#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    while(k--){
        int a;
        cin>>a;
        vector<int>vec;
        for(int i=0;i<a;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        int c=*max_element(vec.begin(),vec.end());
        vector<int>v(vec.begin(),vec.end());
        sort(v.rbegin(),v.rend());
        int d=v[1];
        for(int i=0;i<a;i++){
            if(vec[i]==c) vec[i]-=d;
            else {
                vec[i]-=c;
            }
        }
        for(int i=0;i<a;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
     
        
    }
    return 0;
}