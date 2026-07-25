#include <iostream>
#include  <vector>
#include<climits>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>enter(n);
    vector<int>exit(n);
    int current=0;
    int maxi=INT_MIN;
    while(n--){
        int e,ex;
        cin>>ex>>e;
        current-=ex;
        current+=e;
        maxi=max(maxi,current);
    }
    cout<<maxi;
   
    return 0;
}