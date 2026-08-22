#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
 
using namespace std;
int main(){
   int k ;
   cin>>k;
   while(k--){
      int a;
      cin>>a;
      int m=0,n=0;
      for(int i=0;i<a;i++){
         int b;
         cin>>b;
         if(b%2==0){
            m+=b;
         }
         else n+=b;
      }
      if(m>n) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
 
   return 0;
}