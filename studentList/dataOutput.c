#include "dataOutput.h"
#include <stdio.h>

// erro message
extern int Error;

// display student data
void showStudentData(student* data){
    if(data != NULL){
        printf("stunum:%d name:%s\n",data->id,data->name);
    }else{
        printf("data does not registrated. \n");
    }
}

// error display
void showError(){
    switch(Error){
    case MESSAGE_OK:
        printf("OK!\n");
        break;
    case MESSAGE_ERROR:
        printf("ERROR!\n");
        break;
    }
}



