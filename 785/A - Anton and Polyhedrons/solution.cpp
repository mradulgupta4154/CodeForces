#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main() {
    int n ;
    cin>>n;
    long long sum=0;
    while(n--){
        string a;
        cin>>a;
        if(a=="Tetrahedron"){
            sum+=4;
        }
        else if(a=="Cube"){
            sum+=6;
        }
        else if(a=="Octahedron"){
            sum+=8;
        }
        else if(a=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=20;
        }
    }
    cout<<sum;
    return 0;
}