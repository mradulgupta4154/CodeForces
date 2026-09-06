#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n; ll k;
        scanf("%d %lld",&n,&k);
        vector<ll> a(n+1), f(n+1), pf(n+1,0), ans(n+1,0);
        for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
        for(int i=1;i<=n;i++) f[i]=a[i]-k*(ll)i;
        for(int i=1;i<=n;i++) pf[i]=pf[i-1]+f[i];
 
        for(int i=2;i<=n-1;i++){
            ll d = a[i+1]-a[i-1]-k;
            if(d<=0){ ans[i]=0; continue; }
            ll threshold = f[i+1]-d;
            int lo=i+2, hi=n, J=n+1;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(f[mid]<=threshold){ J=mid; hi=mid-1; }
                else lo=mid+1;
            }
            ll sumF, cnt;
            if(J<=n){
                sumF = pf[J-1]-pf[i];
                cnt  = (ll)(J-1-i);
            } else {
                sumF = pf[n]-pf[i];
                cnt  = (ll)(n-i);
            }
            ans[i] = cnt*(d - f[i+1]) + sumF;
        }
        for(int i=1;i<=n;i++) printf("%lld ", ans[i]);
        printf("
");
    }
}