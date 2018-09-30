#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int n;

void main()
{
    int a[5], i, mx, mn;
    // 乱数の初期化
    srand((unsigned)time(NULL));

    for (i=0;i<5;i++){
         //１から１０までの乱数を発生させる

        a[i] = rand() % 10 + 1;

        if(i==0){

        mx=a[0];
        mn=a[0];
        
        }

        if(mx<a[i]){
            mx=a[i];
        }

        if(mn>a[i]){
            mn=a[i];
        }

        printf("%d ", a[i]);
    }
    printf("\n");
    printf("最大値:%d\n",mx);
    printf("最小値:%d\n",mn);
    
}
