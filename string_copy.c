#include <stdio.h>
#include <string.h>

// how to use strcpy, strcat.

void main()
{
    char s[10];
    int len;
    //   文字列のコピー
    strcpy(s, "my name is ");
    printf("s=%s\n", s);
    //   文字列の結合
    strcat(s, "Velonica");
    printf("s=%s\n", s);
    //   文字列の長さ
    len = strlen(s);
    printf("str length：%d\n", len);
}