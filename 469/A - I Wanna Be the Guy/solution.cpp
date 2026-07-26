#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int p;
    cin>>p;
    set<int>p1;
    
    while(p--){
        int a;
        cin>>a;
        p1.insert(a);
    }
    int q;
    cin>>q;
    while(q--){
        int b;
        cin>>b;
        p1.insert(b);
    }
    if(p1.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}