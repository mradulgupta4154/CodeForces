#include <iostream>
#include <vector>
#include<set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
        vector<int>vec;
        while(a--){
            int b;
            cin>>b;
            vec.push_back(b);           
        }
        set<int> s(vec.begin(), vec.end());
        if(s.size() == vec.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
 
    return 0;
}