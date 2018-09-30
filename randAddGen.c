#include <stdio.h>

void main()
{
    int i, a, b; 
    
    // 乱数の初期化
    srand((unsigned)time(NULL));

    for (i = 0; i < 6; i++)
    {
       //１から１０までの乱数を発生させる
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        
        printf("%d + %d = %d\n", a, b, a + b);
    }

}