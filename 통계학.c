#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int compare(const int* a, const int* b) {
	return(*a - *b);//오름차순 정렬
}

int half(float n){
    if(n >= ((int)n + 0.5)) return (int)n+1;
    else return ((int)n);
}

double arith(double sum, int n){
    if(sum/n > -0.5 && sum/n <0) return 0;
    else return sum/n;
}

int mode(int list[], int n){
    int modeList[8001] = {0, }, cnt=0, max=0, index=0;

    for(int i=0; i<n; i++){
        modeList[list[i]+4000]++;
        if(modeList[list[i]+4000] > max) max = modeList[list[i]+4000];
    }

    for(int i=0; i<8001; i++){
        if(max == modeList[i]){
            cnt++;
            index = i;
            if(cnt == 2) return i-4000;
        }
        if(i==8000) return index-4000;
    }


}

int main()
{
    int n;
    double sum = 0;

    scanf("%d", &n);
    int nlist[n];

    for(int i=0; i<n; i++){
        scanf("%d", &nlist[i]);
        sum += nlist[i];
    }
    
    qsort(nlist, n, sizeof(int), compare); 

    printf("%.0f\n%d\n%d\n%d\n", arith(sum, n), nlist[(n+1)/2 - 1], mode(nlist, n), nlist[n-1] - nlist[0]);

    return 0;
}

// %.0f 로 출력하면 자동적으로 반올림이 된다