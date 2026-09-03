#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
        string k;
        cin>>k;
        int e=0,b=0,c=0;
        for(int i=0;i<k.length();i++){
            if(k[i]=='A'){
                e++;
            }
            else if(k[i]=='B'){
                b++;
            }
            else if(k[i]=='C'){
                c++;
            }
        }
        if(e+c==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}