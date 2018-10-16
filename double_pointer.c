#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void twice(int *d){

    for(int i = 0; i < 5; i++)
    {
        d[i]=2*d[i];
        printf("%d ",d[i]);
    }

    printf("\n");

}


 void disp_rand(int *a){

    for(int i = 0; i < 5; i++){

        printf("%d ", a[i]);

    }

    printf("\n");
}


void main(){

    int b[5];
    srand((unsigned) time(NULL));
    
    for(int i = 0; i < 5; i++)
    {
     b[i]=rand()%100 + 1;
    }
    
    printf("発生した乱数:\n");

    disp_rand(b);

    printf("二倍にした値\n");

    twice(b);
    // disp_rand(twice(*b));
    // printf("%p ",a[5]);
    // printf("\n");
    // printf(twice(b));
    
    // twice(disp_rand(a));

}


















