#include <iostream>
#include <vector>
#include <set>
#include <string>
 
using namespace std;
int main(){
   int m;
   cin>>m;
   string c =to_string(m);
   set<char>s;
   s.insert(c.begin(),c.end());
   if(m%4==0 or m%7==0 or m%47==0 or m%74==0 or m%474==0 or m%477==0) cout<<"YES"<<endl;
   else if(s.size()<3 and (s.find('4')!=s.end() and s.find('7')!=s.end())) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
   return 0;
}