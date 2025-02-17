#include <stdio.h>

int main(){
    int t, x, zlist[41] = {1, 0, 1, 1, }, olist[41] = {0, 1, 1, 2, };
    scanf("%d", &t);

    for(int i=2; i<39; i++){
        zlist[i+2] = zlist[i+1] + zlist[i];
        olist[i+2] = olist[i+1] + olist[i];
    }

    for(int i=0; i<t; i++){
        scanf("%d", &x);
        printf("%d %d\n", zlist[x], olist[x]);
    }


    return 0;
}