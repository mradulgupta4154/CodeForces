#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    long long arr[4];
    for (int i = 0; i < 4; i++) cin >> arr[i];
    sort(arr, arr + 4);
    long long t = arr[3]; // a+b+c
    long long a = t - arr[2];
    long long b = t - arr[1];
    long long c = t - arr[0];
    cout << a << " " << b << " " << c << endl;
    return 0;
}