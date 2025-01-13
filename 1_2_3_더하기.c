#include <stdio.h>

int ways(int n){
    int ret=0;
    if(n==1) return 1;
    else if (n<=3){
        ret++;
        for(int i=1; i<n; i++) ret += ways(n-i);
    }
    else{
        for(int i=1; i<4; i++) ret += ways(n-i);
    }

    return ret;
}

int main(void) {
    int T;
    scanf("%d", &T);
    int nlist[T];

    for(int i=0; i<T; i++){
        scanf("%d", &nlist[i]);
    }

    for(int i=0; i<T; i++){
        printf("%d\n", ways(nlist[i]));
    }

    return 0;
}