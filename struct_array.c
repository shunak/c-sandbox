#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};


typedef struct student student_data;


void main(){
    int i;
    student_data data[]={
        {1,"Tom",18},
        {2,"bob",19},
        {3,"alice",18},
        {4,"jon",19}
    };

    for(i=0; i<4; i++){
        printf("id:%d name:%s age:%d\n", data[i].id, data[i].name, data[i].age);
    }
}