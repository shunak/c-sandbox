#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a[5]={}, i, mx, mn, n1=0, n2=0, n3=0, j;
    // 乱数の初期化
    srand((unsigned)time(NULL));

    for (i=0;i<5;i++){
         //１から１０までの乱数を発生させる
        a[i] = rand() % 100 + 1;

        if(a[i]>=20 && a[i]<=50){
            n1++;
        }else if(a[i]>80){
            n2++;
        }else if(a[i]>=0&&a[i]<10){
            n3++;
        }

        printf("a[%d]=%d ", i, a[i]);
    }

    // for(j=0;j<5;j++){


    // }

        printf("\n");
        printf("20以上50以下の数:%d個\n",n1);
        printf("80より大きい数:%d個\n",n2);
        printf("0以上10未満の数:%d個\n",n3);

}
