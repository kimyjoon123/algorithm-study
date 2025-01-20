#include <stdio.h>

// 종말의 수인지 확인하는 함수
int isEndnum(int n){
    int cnt=0;
    while(n != 0){
        if(n%10 == 6) {
            cnt++;
            if(cnt==3) return 1;
        }
        else cnt=0;
        n /= 10;
    }
    return 0;
}

int main(void) {
    int N, Nlist[10000] = {0,};
    int x=666, index=0;
    while(Nlist[9999] == 0){
        if(isEndnum(x)) Nlist[index++] = x;
        x++;
    }

    scanf("%d", &N);
    printf("%d", Nlist[N-1]);
    
    return 0;   
}