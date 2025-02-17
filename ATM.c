#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b) {
	return(*a - *b);//오름차순 정렬
}

int main(){
    int n, sum=0;
    scanf("%d", &n);
    int nlist[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &nlist[i]);
    }

    qsort(nlist, n, sizeof(int), compare); 

    for(int i=0; i<n; i++){
        sum += nlist[i] * (n-i);
    }

    printf("%d", sum);

    return 0;
}