#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, index=0, cnt=1;
    scanf("%d %d", &n, &k);
    int nlist[n];
    memset(nlist, 0, n * sizeof(int)); // 0으로 초기화
    printf("<");

    for(int i=0; i<n; i++){
        //k만큼 카운트트할 때까지 돌기, 쓰여진 값들은 1로 바꿔서 1일때는 카운트 안 올리고 그냥 건너뛰기
        while(cnt < k){
                index++;
                if(index >= n) index = 0;
                if(nlist[index] == 0){
                    cnt++;
                }
            }
        nlist[index] = 1;
        cnt=0;
        
        printf("%d", index+1);

        if(i == n-1) printf(">");
        else printf(", ");
    }

    return 0;
}