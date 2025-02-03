#include <stdio.h>

int isdecimal(int x){
    if(x==1) return 0;
    else if(x==2 || x==3) return 1;
    else {
        for(int i=2; i<=sqrt(x); i++){
        if(x%i == 0) return 0;
        }
    }

    return 1;
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i=m; i<=n; i++){
        if(isdecimal(i)) printf("%d\n", i);
    }

    return 0;
}
