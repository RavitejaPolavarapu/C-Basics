#include<stdio.h>
void main()
{
	int a;
	printf("Enter the Marks : ");
	scanf("%d",&a);
	if(80<=a && a<=100 )
	{
		printf("A");
	}
	else if(a>=70 && a<80)
	{
		printf("B");
	}
	else if(a>=60 && a<70)
	{
		printf("C");
	}
	else if(a>=50 && a<60)
	{
		printf("D");
	}
	else if(a<50)
	{
		printf("Fail");
	}
	else
	{
		printf("invalid input");
	}
		
}
