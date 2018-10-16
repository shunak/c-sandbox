#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int *ransu)
{
    int suji;
    for (suji = 0; suji < 5; suji++)
        printf("%d ", ransu[suji]);
    printf("\n\n");
}

void nibai(int *ransu)
{
    int suji;
    for (suji = 0; suji < 5; suji++)
        ransu[suji] = ransu[suji] * 2;
}

int main()
{
    int ransu[5];
    int suji;
        // int *p = NULL;

    printf("発生した乱数:\n");

        //  p = &ransu[0];

    srand((unsigned)time(NULL));
    for (suji = 0; suji < 5; suji++)
    {
        ransu[suji] = rand() % 100 + 1;
                //    printf("%d ", *p);
                //    p++;
    }
        // printf("\n\n");
    print(ransu);              // 追加
    nibai(ransu);              // 追加
    printf("二倍した数値:\n"); // 追加
    print(ransu);              // 追加
    return 0;
}