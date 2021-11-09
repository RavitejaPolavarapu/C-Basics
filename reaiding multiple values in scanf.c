//Reading multiple values

#include<stdio.h>
void main()
{
	int a,b,c;
	
	/* 1) -->printf("enter the 1st number");
	scanf("%d",&a);
	printf("enter the 2st number");
	scanf("%d",&b);
	printf("enter the 3st number");
	scanf("%d",&c);      */
	
    printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);	
	
	printf("Number1 : %d\n",a);
	printf("Number2 : %d\n",b);
	printf("Number3 : %d\n",c);
}
