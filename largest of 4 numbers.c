//largest of four numbers
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter any Four numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if ((a>=b && a>=c) && (a>=d))
	{
		printf("%d is Largest",a);
	}
	else if ((b>=a && b>=c)&& b>=d)
	{
		printf("%d is largest",b);
	}
	else if ((c>=a && c>=b) && c>=d)
	{
	printf("%d is largest",c);
	}
	else 
	{
	printf("%d is largest",d);
	}
	
	
	
	
}
