#include <iostream>
#include <algorithm>
#include <climits>
 
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n>>k>>l>>c>>d>>p>>nl>>np;
    int g = (k*l)/nl;
    int e =c*d;
    int f=p/np;
    cout<<min({g,e,f})/n<<endl;
    return 0;
 
    
}