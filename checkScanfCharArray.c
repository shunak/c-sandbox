#include <stdio.h>
  
  int i;
  char s[3];
  
int main(){

// eofが不明なので、常にscanfの先頭は配列のs[0]として値をとる
// 長さの決まっているものなら、配列の要素番号は一意に決まります
 while(scanf("%s",s)!=EOF){

     if(s[0]=='1'){
         puts("1が入力されました");
     }else if(s[0]=='2'){
         puts("2が入力されました");
     }
     printf("%s\n",s);

 }

  
  return 0;

}


