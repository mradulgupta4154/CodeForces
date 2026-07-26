#include <iostream>
#include <set>
#include <string>
using namespace std;
 
int main() {
    string line;
    getline(cin,line);
    set<char>s;
    for(int i =0;i<line.size();i++){
        char c=line[i];
        if(c>='a' and c<='z') s.insert(c);
    }
    cout<<s.size();
    
    return 0;
}