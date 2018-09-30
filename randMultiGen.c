#include <stdio.h>

// 計算練習生成プログラム
void main()
{
    int i, a, b; 
    
    // 乱数の初期化
    srand((unsigned)time(NULL));

    for (i = 0; i < 100; i++)
    {
       //１から１０までの乱数を発生させる
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        
        printf("%d × %d = %d\n", a, b, a * b);
        printf("%d × %d = \n", a, b);
        
    }

}