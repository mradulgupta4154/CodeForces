#include<iostream>
using namespace std;
bool distinct(int n){
     bool seen[10]={false};
     while(n>0){
          int d = n%10;
          if(seen[d]) return false;
          seen[d]=true;
          n/=10;
     }
     return true;
}
int main(){
     int y;
     cin>>y;
     int n =y+1;
     while(!distinct(n))n++;
     cout<<n<<endl;
     return 0;
}