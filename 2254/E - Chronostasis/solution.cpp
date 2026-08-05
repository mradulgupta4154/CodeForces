#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> b(n);
        ll total = 0;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            total += b[i];
        }
 
        if(total <= 0){
            cout << -1 << "
";
            continue;
        }
 
        multiset<ll> ms(b.begin(), b.end());
        ll S = 0;
        vector<ll> res(n);
        bool ok = true;
        for(int i = 0; i < n; i++){
            auto it = ms.upper_bound(-S); // first element > -S
            if(it == ms.end()){
                ok = false;
                break;
            }
            ll x = *it;
            ms.erase(it);
            S += x;
            res[i] = S;
        }
 
        if(!ok){
            // shouldn't happen if total > 0, but guard anyway
            cout << -1 << "
";
        } else {
            for(int i = 0; i < n; i++){
                cout << res[i] << " 
"[i == n-1];
            }
        }
    }
 
    return 0;
}