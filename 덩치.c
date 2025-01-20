#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int Dlist[N][2];
    int ranks[N];
    for(int i = 0; i<N; i++){
        scanf("%d %d", &Dlist[i][1], &Dlist[i][2]);
        ranks[i] = 1;
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(Dlist[i][1]<Dlist[j][1] && Dlist[i][2]<Dlist[j][2]) ranks[i]++;
        }
    }
    
    for(int i=0; i<N; i++) printf("%d ", ranks[i]);
    
    return 0;
}