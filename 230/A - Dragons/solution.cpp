#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
int main(){
   int s,n;
   cin>>s>>n;
   vector<pair<int ,int>>a1;
   while(n--){
      int a,b;
      cin>>a>>b;
      a1.push_back({a,b});
   }
   sort(a1.begin(),a1.end());
   int i=0;
   for(;i<a1.size();i++){
      if(a1[i].first<s) s+=a1[i].second;
      else break;
   }
   if(i==a1.size()) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 
   
   
   return 0;
}