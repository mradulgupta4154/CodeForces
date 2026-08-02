#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int c=max(a,b);
        int d =min(a,b);
        cout<<d<<" "<<c<<endl;
    }
    
 
    return 0;
}