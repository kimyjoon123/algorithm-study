#include <stdio.h>


int main(void) {
    int N, score=0;
    scanf("%d", &N);
    char ox[N][100]; //ox문자열들들을 담을 2차원 배열

    for(int i=0; i<N; i++){
        scanf("%s", &ox[i]);
    }

    for(int i=0; i<N; i++){
        for(int j=0; ox[i][j] != '\0'; j++){
            if(ox[i][j]=='O'){
                int add = 0;
                while(ox[i][j]=='O'){
                    score += 1 + add;
                    add++;
                    j++;
                }
                add = 0;
            }
        }
        printf("%d\n", score);
        score = 0;
    }
    
    
    return 0;
}