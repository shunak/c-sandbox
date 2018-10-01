#include <stdio.h>
#include <string.h>

char main(){

char s[100];
// char t[100];

printf("Input words:");
scanf("%s",s);

// ref ASCII code
int i;
for(i=0;i<strlen(s);i++){
    if(s[i]>=65&&s[i]<=90){
        s[i]=s[i]+32;
    }
}


printf("%s\n",s);

}





