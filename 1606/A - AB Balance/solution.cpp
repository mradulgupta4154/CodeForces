#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m;
    while(m--){
        string a;
        cin >> a;
        if(a[0] != a[a.size()-1]) a[a.size()-1] = a[0];
        cout << a << "
";
    }
}