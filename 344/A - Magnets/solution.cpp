#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>vec;
    int count=0;
    while(n--){
        int a ;
        cin>>a;
        vec.push_back(a);
    }
    for(int i =0;i<vec.size()-1;i++){
        if(vec[i]!=vec[i+1]) count++;
    }
    cout<<count+1;
    return 0;
}
    