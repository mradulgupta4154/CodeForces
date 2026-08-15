#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
int main(){
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   int d = max({a*b*c,(a+b)*c,a*(b+c),a+b+c});
   cout<<d<<endl;
 
   
   
   return 0;
}