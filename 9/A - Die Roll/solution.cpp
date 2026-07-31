#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int a,b;
    cin >> a>>b;
    int c=max(a,b);
    int f=6;
    int d = 6-c+1;
    int s=d , g=f;
    while(g!=0){
        int t =g;
        g=s%g;
        s=t;
    }
    cout<<d/s<<"/"<<f/s<<endl;
    return 0;
}