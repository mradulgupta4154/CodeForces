#include <stdio.h>
 
int sqdist(int x1,int y1,int x2,int y2){
    return (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
}
 
int main(){
    int m;
    scanf("%d", &m);
    while(m--){
        int x[4], y[4];
        for(int i=0;i<4;i++)
            scanf("%d %d", &x[i], &y[i]);
 
        int minD = -1;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                int d = sqdist(x[i],y[i],x[j],y[j]);
                if(d>0 && (minD==-1 || d<minD)) minD = d;
            }
        }
        printf("%d
", minD);
    }
    return 0;
}