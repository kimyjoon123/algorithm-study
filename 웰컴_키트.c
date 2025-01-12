#include <stdio.h>

int main(void){
    int N, T, P, Tsize[6];
    int Tret=0, Pret=0;

    scanf("%d", &N);
    scanf("%d %d %d %d %d %d", &Tsize[0], &Tsize[1], &Tsize[2], &Tsize[3], &Tsize[4], &Tsize[5]);
    scanf("%d %d", &T, &P);

    for(int i=0; i<6; i++){
        Tret += Tsize[i]/T + (Tsize[i]%T > 0);
    }

    printf("%d\n%d %d", Tret, N/P, N%P);

    return 0;
}
