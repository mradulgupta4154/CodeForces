#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    int m;
    cin>>m;
    string c;
    cin>>c;
    stack<int>s;
    s.push(c[0]-'0');
    for(int i=1;i<m;i++){
        if(!s.empty() and ((s.top()==1 and c[i]=='0') or (s.top()==0 and c[i]=='1'))){
            s.pop();
            continue;
        }
        else{
            s.push(c[i]-'0');
        }
    }
    cout<<s.size()<<endl;
    return 0;
}