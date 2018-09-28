#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void main(){
    FILE *file; // file pointer
    char line[SIZE]; // read line
    line[0] = '\0'; // initialize
    file = fopen("c:\\test\\sample.txt","r"); // open file for read
    if(file == NULL){ //when faild open
        printf ("cannot open file \n"); // print error message
        exit(1); 
    }
    while(fgets(line, SIZE, file)!=NULL){
        printf("%s",line);
    }
    fclose(file); // close file
}