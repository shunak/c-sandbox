#include <stdio.h>
#include <string.h>

int main(void)
{

    char a[3];
    char s1[6];

    char b[3];
    char s2[3];

    char output[6];

    scanf("%s",a);
    strcpy(s1, a);

    // puts(s1);

    scanf("%s",b);
    strcpy(s2, b);


    strcat(output,s1);

    strcat(output,s2);

    // strcpy(output, s1);

    // output[6] = strcat(s1, s2);

    puts(output);

return 0;

}