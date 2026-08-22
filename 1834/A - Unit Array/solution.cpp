#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int neg = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == -1) neg++;
        }
 
        int ops = 0;
        if(neg % 2 == 1){
            ops += 1;
            neg -= 1;
        }
        while(neg > n / 2){
            ops += 2;
            neg -= 2;
        }
        cout << ops << "
";
    }
    return 0;
}