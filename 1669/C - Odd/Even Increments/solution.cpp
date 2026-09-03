#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int>vec;
        for(int i=0;i<b;i++){
            int c;
            cin>>c;
            vec.push_back(c);
        }
        bool is=true;
        for(int i=0;i<b-2;i++){
            if((vec[i]%2==0 and vec[i+2]%2!=0) or (vec[i]%2!=0 and vec[i+2]%2==0)){
                is=false;
                break;
            }
        }
        if(is){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}