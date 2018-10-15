#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void disp_rand(int a[]){

    srand((unsigned) time(NULL));
    int b;
    for(int i = 0; i < 5; i++)
    {

        b = rand() % 100 + 1;
        a[i]=b; 

        printf("%d ",a[i]);

    }
    printf("\n");



}

void main(){


    int a[5];

    disp_rand(a);



}


















