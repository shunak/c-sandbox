#include <stdio.h>

typedef struct {
    int a;
    double d;
}num;


void d1(num data);
void d2(num* pdata);

void main(){
    num n1={1,1.3f};
    num n2 ={1,1.3f};
    printf("n1のアドレス:0x%x n2のアドレス:0x%x\n",&n1,&n2);
    d1(n1);
    d2(&n2);
    printf("n1.a=%d n2.d=%f\n",n1.a,n1.d);
    printf("n2.a=%d n2.d=%f\n",n2.a,n2.d);
}


void d1(num data){
    printf("a=%d f=%f\n",data.a,data.d);
    printf("d1にわたってきたデータのアドレス:0x%x\n",&data);
    data.a=2;
    data.d=2.4;
}


void d2(num* pdata){
    printf("a=%d f=%f\n", pdata->a,pdata->d);
    printf("d2にわたってきたデータのアドレス:0x%x\n",pdata);
    pdata->a=2;
    pdata->d=2.4;
}

