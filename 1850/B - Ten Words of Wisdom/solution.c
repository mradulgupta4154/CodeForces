#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int c;
        scanf("%d",&c);
        int be=-1;
        int q=-1;
        for(int i=1;i<=c;i++){
            int a,b;
            scanf("%d %d",&a,&b);
            if(a<=10){
                if(b>q){
                    q=b;
                    be=i;
                }
            }
        }
        printf("%d
",be);
    }
    return 0;
 
}