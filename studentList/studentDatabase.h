#ifndef _STUDENT_DATABASE_H_
#define _STUDENT_DATABASE_H_

// max student num which can regist to database
#define MAX_STUDENT 10

// student name max length
#define LENGTH 50

// error message
enum ERROR{
    MESSAGE_OK,
    MESSAGE_ERROR
};

// student data
typedef struct {
    int id;
    char name[LENGTH];
} student;

// initialize database
void initDatabase();

// regist data to database
int add(int,char*);

// get student data
student* get(int);

#endif










