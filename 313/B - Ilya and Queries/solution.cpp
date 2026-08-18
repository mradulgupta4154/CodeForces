#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int n = s.size();
 
    vector<int> pref(n, 0); // pref[i] = number of equal-adjacent-pairs in s[0..i]
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + (s[i] == s[i-1] ? 1 : 0);
    }
 
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        l--; r--; // convert to 0-indexed
        int ans = (l < r) ? (pref[r] - pref[l]) : 0;
        cout << ans << "
";
    }
    return 0;
}