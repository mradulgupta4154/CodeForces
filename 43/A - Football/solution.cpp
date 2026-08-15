#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
int main(){
   int m;
   cin>>m;
   unordered_map<string ,int>mp;
   for(int i=0;i<m;i++){
      string b;
      cin>>b;
      mp[b]++;
   }
   int cou=0;
   for(auto&[num,count]:mp){
      if(cou<count) cou=count;
   }
   for(auto&[num,count]:mp){
      if(cou==count) cout<<num<<endl;
   }
 
   return 0;
}