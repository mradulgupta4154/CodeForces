#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int maxPos = 0, minPos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxPos]) maxPos = i;   
        if (a[i] <= a[minPos]) minPos = i; 
    }
 
    int swaps = maxPos + (n - 1 - minPos);
    if (maxPos > minPos) swaps--;
 
    cout << swaps << endl;
    return 0;
}