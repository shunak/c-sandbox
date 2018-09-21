#include <stdio.h>

int main(){

    int x[10];


    printf("%lx\n",sizeof(int));

    printf("%p\n",&x);

    printf("%p\n",&x+sizeof(int)*0);
    printf("%p\n",&x+sizeof(int)*1);
    printf("%p\n",&x+sizeof(int)*2);
    printf("%p\n",&x+sizeof(int)*3);
    printf("%p\n",&x+sizeof(int)*4);
    printf("%p\n",&x+sizeof(int)*5);
    printf("%p\n",&x+sizeof(int)*6);
    printf("%p\n",&x+sizeof(int)*7);
    printf("%p\n",&x+sizeof(int)*8);
    


    // for(int i = 0; i < 10; i++){
    //     printf("%p\n",&x+sizeof(int)*i);
    // }
    


    return 0;








}