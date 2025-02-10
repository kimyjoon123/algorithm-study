#include <stdio.h>

int main()
{
    int n, k, index=0, cnt=0;
    scanf("%d %d", &n, &k);
    int nlist[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nlist[i]);
    }

    for(int i=0; i<n; i++){
        cnt += k/nlist[n-1-i];
        k %= nlist[n-1-i];
    }

    printf("%d", cnt);

    return 0;
}