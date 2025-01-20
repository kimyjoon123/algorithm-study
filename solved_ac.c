#include <stdio.h>
#include <stdlib.h>

int half(float n){
    if(n >= ((int)n + 0.5)) return (int)n+1;
    else return ((int)n);
}

int compare(const int* a, const int* b) {
	return(*a - *b);//오름차순 정렬
}

int main(){
    int n, ex, sum=0;

    scanf("%d", &n);
    int nlist[n];
    
    if(n==0){
        printf("0");
        return 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d", &nlist[i]);
        sum += nlist[i];
    }

    qsort(nlist, n, sizeof(int), compare); // compare함수에 따라 정렬해주는 함수

    ex = half(n*0.15);

    for(int i=0; i<ex; i++){
        sum -= (nlist[i] + nlist[n-i-1]);
        nlist[i]=0;
        nlist[n-i-1]=0;
    }   

    printf("%d", half((float)sum / (n-ex*2)));
    
    return 0;
}
