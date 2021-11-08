//comparision of operators
#include<stdio.h>
void main()
{	int a=60,b=30;
     /*    true --> 1
           false --> 0       */
	printf("a= %d\nb= %d\n",a,b);
	printf("%d > %d ---> %d\n",a,b,a>b); 
	printf("%d < %d ---> %d\n",a,b,a<b);
	printf("%d = %d ---> %d\n",a,b,a==b);
	printf("%d != %d ---> %d\n",a,b,a!=b);
	printf("%d >= %d ---> %d\n",a,b,a>=b); 
 /*   a>=b means a>b or a=b if any one 
      of the comperision is correct than 
	  it prints true(0) or else it prints false(0)         */
	printf("%d <= %d ---> %d",a,b,a<=b);
	
 } 
