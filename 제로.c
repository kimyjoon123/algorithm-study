#include <stdio.h>

int main(){
    int k, x, zero=0, sum=0, index=0;
    scanf("%d", &k);
    int klist[k];

    for(int i=0; i<k; i++){
        scanf("%d", &x);
        if(x != 0) {
            klist[index++] = x;
            sum += x;
            zero = 1;
        }
        else if(x == 0){
            while(klist[index - zero] == 0) zero++;
            sum -= klist[index - zero];
            klist[index - zero] = 0;
            zero++;
        }
    }

    printf("%d", sum);

    return 0;
}