#include <stdio.h>
#include "studentDatabase.h"
#include "dataOutput.h"



void main(){
    int i;
    char names[][LENGTH]={"Tom","Jeff","bob","vagin"};
    int ids[] = {1,2,2,3};
    initDatabase();
    for(i=0;i<4;i++){
        add(ids[i],names[i]);
        printf("regist: %d %s\n", ids[i],names[i]);
        showError();
    }
    for(i=0;i<3;i++){
        showStudentData(get(i+1));
    }
}