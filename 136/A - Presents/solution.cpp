#include <iostream>
using namespace std;
int main(){
     int n ;
     cin>>n;
     int p[105],ans[105];
     for(int i =1;i<=n;i++){
          cin>>p[i];
          ans[p[i]]=i;
     }
     for(int i=1;i<=n;i++){
          cout<<ans[i]<<" ";
     }
     return 0;
}