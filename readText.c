#include <stdio.h>
#include <stdlib.h>


void main(){
    FILE *file;
    file = fopen("c:\\test\\sample.txt","w");
    if(file==NULL){
        printf("cannot file open\n");
        exit(1);
    }
    fprintf(file,"Hello World!!\r\n");
    fprintf(file,"ABCDEF\r\n");
    fclose(file);
}




