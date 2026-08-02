#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
        int count=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(i+j==a){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
 
    return 0;
}