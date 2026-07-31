#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string c="abc";
    while(n--){
        string a;
        cin>>a;
        if(a=="abc" or a=="bac" or a=="acb" or a=="cba" ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}