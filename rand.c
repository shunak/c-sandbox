#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int n;

void main()
{
    int a[5], i;
    // 乱数の初期化
    srand((unsigned)time(NULL));
    for (i=0;i<5;i++){
         //１から１０までの乱数を発生させる
         a[i] = rand() % 10 + 1;
        printf("%d ", a[i]);
    }
    printf("\n");
    
}

