#include <stdio.h>
#include <stdlib.h>
#include <time.h>






void twice(){



    
}



void disp_rand(int a[]){

    printf("発生した乱数:\n");
    srand((unsigned) time(NULL));
    int b;
    for(int i = 0; i < 5; i++)
    {

        b = rand() % 100 + 1;
        a[i]=b;

        printf("%d ", a[i]);

    }

    printf("\n");
}






void main(){


    int a[5];

    disp_rand(a);


}


















