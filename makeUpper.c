#include <stdio.h>
#include <string.h>

char main(){

char s[100];

printf("Input words:");
scanf("%s",s);

// ref ASCII code
int i;
for(i=0;i<strlen(s);i++){
    if(s[i]>=97&&s[i]<=122){
        s[i]=s[i]-32;
    }
}


printf("%s\n",s);

}





