#include <iostream>
#include <algorithm>
#include<vector>
#include <stack>
using namespace std;
 
int main() {
    int n ;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int mini=INT_MAX;
        for(int i =a;i<=b;i++){
            int diff=(i-a)+(b-i);
            mini=min(mini,diff);
        }
        cout<<mini<<endl;
    }
    return 0;
   
}