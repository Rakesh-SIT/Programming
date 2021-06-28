#include <stdio.h>

int main(void) {
        // your code goes here
        int t,w1,w2,x1,x2,m;
        int d,i,j;
        scanf("%d",&t);
        while(t--){
            scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
            d = w2-w1;
            i = x1*m;
            j = x2*m;
            if(d>=i && d<=j){
                printf("1");
            }
            else{
                printf("0");
            }
            printf("\n");
        }
        return 0;
}