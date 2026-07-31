#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string c="codeforces";
    while(n--){
        string b;
        cin>>b;
        int count=0;
        for(int i =0;i<b.length();i++){
            if(b[i]!=c[i]){
                count++;
            }
 
        }
        cout<<count<<endl;
 
    }
}