#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
   string m;
   cin>>m;
   string ans="";
   transform(m.begin(),m.end(),m.begin(),::tolower);
   for(int i=0;i<m.length();i++){
      if(m[i]=='a' or m[i]=='e' or m[i]=='i' or m[i]=='o' or m[i]=='u' or m[i]=='y') continue;
      else{
         ans+='.';
         ans+=m[i];
      }
   }
   cout<<ans<<endl;
   return 0;
}