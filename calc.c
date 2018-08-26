#include <stdio.h>

int add (int x, int y)
{
	return x + y;
}

int sub (int x, int y)
{
	return x - y;
}

int main(void){

	printf("%d\n",add(1,2));
	printf("%d\n",sub(4,3));

	return 0;
}

