#include <stdio.h>
  
 int main(void)
   {
	    int nx;
            double dx;
	    int vc[3];

           printf("nxのアドレス    :%p\n",&nx);
           printf("dxのアドレス    :%p\n",&dx);
	   printf("vc[1]のアドレス :%p\n",&vc[0]);
	   printf("vc[2]のアドレス :%p\n",&vc[1]);
	   printf("vc[3]のアドレス :%p\n",&vc[3]);

	   return(0);
   }

