#include <stdio.h>

int chill(int row, int col, int k[row][col], int y, int x){
    int bst=0, wst=0, temp=0;
    //b로 시작할 때 칠해야 할 것들 수 세기
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(k[y+i][x+j] != temp) bst++;

            if(temp == 0) temp++;
            else temp--;
        }
        if(temp == 0) temp++;
        else temp--;
    }

    temp = 1;
    //w로 시작할 때 칠해야 할 것들 수 세기
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(k[y+i][x+j] != temp) wst++;

            if(temp == 0) temp++;
            else temp--;
        }
        if(temp == 0) temp++;
        else temp--;
    }
    //printf("bst: %d\twst: %d\n", bst, wst);
    if(bst < wst) return bst;
    else return wst;

}

int main(){
    int n, m, min=2500;
    scanf("%d %d\n", &n, &m);
    int nlist[n][m];

    //w는 1로 b는 0으로 int 2차원 배열 생성성
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char x;
            scanf("%c", &x);
            if(x != 'W' && x != 'B') scanf("%c", &x); //엔터쳤을때 다음 줄 거 바로 받도록록
            
            if(x == 'W') nlist[i][j] = 1;
            else nlist[i][j] = 0;
        }
    }

    //전체 돌면서 최솟값 갱신하기
    for(int i=0; i<=n-8; i++){
        for(int j=0; j<=m-8; j++){
            if(chill(n, m, nlist, i, j) < min) min = chill(n, m, nlist, i, j);
            //printf("min: %d\n", min);
        }
    }

    printf("%d", min);

    return 0;
}
