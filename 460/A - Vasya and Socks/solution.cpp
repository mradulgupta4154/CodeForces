#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    int m,n ;
    cin>>m>>n;
    int day=0;
    while(m>0){
        m--;
        day++;
        if(day%n==0){
            m++;
        }
    }
    cout<<day<<endl;
 
 
    return 0;
}