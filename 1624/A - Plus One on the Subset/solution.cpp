#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            vec.push_back(b);
        }
        int c=*min_element(vec.begin(),vec.end());
        int d=*max_element(vec.begin(),vec.end());
        cout<<d-c<<endl;
    }
 
    return 0;
}