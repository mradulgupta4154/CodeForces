#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
 
int main(){
    int a;
    cin >> a;
    while(a--){
        string b;
        cin >> b;
 
        vector<string> vec;
        for(char c : {'a','b','c','d','e','f','g','h'}){
            string sq = "";
            sq += c;
            sq += b[1];
            vec.push_back(sq);
        }
        for(char c : {'1','2','3','4','5','6','7','8'}){
            string sq = "";
            sq += b[0];
            sq += c;
            vec.push_back(sq);
        }
 
        for(int i = 0; i < (int)vec.size(); i++){
            if(vec[i] == b) continue; // skip the square itself
            cout << vec[i] << " ";
        }
        cout << "
";
    }
    return 0;
}