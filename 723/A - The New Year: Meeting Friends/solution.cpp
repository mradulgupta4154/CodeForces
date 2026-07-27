#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int d = abs(a-b)+abs(b-c);
    int e = abs(a-b)+abs(a-c);
    int f= abs(a-c)+abs(b-c);
    cout<<min({d,e,f})<<endl;
    return 0;
    
}