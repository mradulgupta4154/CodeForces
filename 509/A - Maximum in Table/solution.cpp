#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
 
int main(){
    int m;
    cin>>m;
    vector<vector<long long>>vec(m,vector<long long>(m,1));
    for(int i=1;i<m;i++){
        for(int j=1;j<m;j++){
            vec[i][j]=vec[i-1][j]+vec[i][j-1];
        }
    }
    cout<<vec[m-1][m-1]<<endl;
 
    return 0;
}