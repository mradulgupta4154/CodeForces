#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int mx = 0, x;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            mx = max(mx, x);
        }
        printf("%d
", mx);
    }
}