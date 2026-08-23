#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    
    int hh = stoi(s.substr(0, 2));
    string mm = s.substr(3, 2);
    string period = (hh >= 12) ? "PM" : "AM";
    
    // Convert 24-hour hh to 12-hour format
    if (hh == 0) {
        hh = 12;
    } else if (hh > 12) {
        hh -= 12;
    }
    
    // Format hour with leading zero if needed
    string hh_str = (hh < 10 ? "0" : "") + to_string(hh);
    
    cout << hh_str << ":" << mm << " " << period << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}