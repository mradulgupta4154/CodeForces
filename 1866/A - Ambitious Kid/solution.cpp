#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>vec;
    for(int i=0;i<t;i++){
        int b;
        cin>>b;
        vec.push_back(abs(b));
    }
    int c =*min_element(vec.begin(),vec.end());
    cout<<c<<endl;
    return 0;
 
 
}