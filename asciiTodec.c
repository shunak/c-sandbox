#include <stdio.h>

// char(ascii length is 3) to decimal output 

  int i;
  char s[3];
  
int main(){

  scanf("%s",s);

  for(i = 0; i < sizeof(s); i++)
  {
    printf("%d\n",s[i]);
  }
  
  return 0;

}







// int main()
// {
//     top = 2;
//     S[2] = 3;
//     a = pop();
//     printf("%d\n", a);
// }

