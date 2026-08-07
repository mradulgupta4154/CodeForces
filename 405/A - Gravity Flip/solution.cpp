#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int b;
    cin>>b;
    vector<int>vec;
    for(int i=0;i<b;i++){
         int c;
         cin>>c;
         vec.push_back(c);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<b;i++){
         cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
    