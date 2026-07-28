#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main() {
    int n,k;
    cin >> n>>k;
    int c=240-k;
    int sum=0;
    int count=0;
    int i;
    for(i = 1;i<=n;i++){
        if(sum+5*i<=c){
            sum+=5*i;
            count++;
        }
        else{
            break;
            
        }
 
    }
    cout<<count<<endl;
    return 0;
    
    
}