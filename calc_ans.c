#include <stdio.h>
int main()
{
	int add(int,int); // declear func
	int sub(int,int);

	int ans;

	ans=add(10,20);
	printf("10+20の答えは%dです。\n",ans);

	ans = sub(20,10);
	printf("20-10の答えは%dです。\n",ans);

	return 0;
}





int add (int x, int y)
{
	int ans;
	ans = x + y;
	return ans;
}

int sub (int x, int y)
{
	int ans;
	ans = x - y;
	return ans;
}
		
