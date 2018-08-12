#include <stdio.h>

int main(void){

	int *ptr;
	int x;
	
	ptr = &x;	

	*ptr = 10;

	printf("%d\n",x);

	printf("%p\n",ptr);
	
	printf("%d\n",*ptr);

	return 0;




}
