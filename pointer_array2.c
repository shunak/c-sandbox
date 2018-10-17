#include <stdio.h>
#include <malloc.h>

#define SIZE 6

void main()
{
    //  数値配列代入用のポインタ変数
    double *a = NULL;
    int i;
    //  メモリの生成
    a = (double *)malloc(sizeof(double) * SIZE);
    for (i = 0; i < SIZE; i++)
    {
        a[i] = 0.1 * i;
        if(i==3){
            a[i]+=0.000003;
        }
    }
    //  結果の表示
    for (i = 0; i < SIZE; i++)
    {
        printf("%f ", a[i]);
    }
    printf("\n");
    //  メモリの開放
    free(a);
}