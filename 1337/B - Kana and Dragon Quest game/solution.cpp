#include <iostream>
using namespace std;
 
int main(){
    int m;
    cin >> m;
    while(m--){
        long long n, a, b;
        cin >> n >> a >> b;
 
        // only apply spell 1 while it actually helps, and while we still have charges
        while(a > 0){
            long long next = (n) / 2 + 10; // ceiling division, same as round(n/2.0)
            if(next >= n) break;               // no longer beneficial, stop early
            n = next;
            a--;
        }
 
        // spell 2: just subtract directly instead of looping b times
        n -= 10LL * b;
 
        cout << (n <= 0 ? "YES" : "NO") << "
";
    }
    return 0;
}