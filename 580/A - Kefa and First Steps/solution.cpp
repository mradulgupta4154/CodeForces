#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>vec;
    int diff=0;
    int count=0;
    for(int i =0;i<a;i++){
        int b;
        cin>>b;
        vec.push_back(b);
    }
    for(int i=0;i<a-1;i++){
        if(vec[i]<=vec[i+1]){
            count++;
            diff=max(diff,count);
        } 
        else{
            count=0;
        }
 
    }
    cout<<diff+1<<endl;
 
    return 0;
}