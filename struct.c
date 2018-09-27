#include <stdio.h>
#include <string.h>

struct student
{
    int id;         //	学生番号
    char name[256]; //	名前
    int age;        //	年齢
};



void main(){
    struct student std;
    std.id = 1;
    strcpy(std.name,"Tom");
    std.age = 17;
    printf("学生番号:%d　名前:%s 年齢:%d\n", std.id, std.name, std.age);
}
