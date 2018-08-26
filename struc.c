#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct
	{
		int no;
		char name[20];
	} STUDENT;

	STUDENT tanaka ;
	STUDENT *pnt;

	tanaka.no=12345;
	strcpy(tanaka.name,"Tom"); // copy to char type array
	pnt = &tanaka; // substitute pointer of tanaka for ipnt

	printf("学生番号は%d\n",pnt->no);
	printf("氏名は%sです。\n",pnt->name);
	return 0;
}

