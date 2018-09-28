#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *file;
    int c;
    file = fopen("c:\\test\\sample.txt","r");
    if(file==NULL){
        printf("cannot open file \n");
        exit(1);
    }
    while((c=fgetc(file))!=EOF){ // read file data by char
        printf("%c",(char)c);
    }
    fclose(file);
}