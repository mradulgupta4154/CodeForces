#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string c;
        cin>>c;
        sort(c.rbegin(),c.rend());
        cout<<(int)c[0]-96<<endl;
    }
    return 0;
 
 
}