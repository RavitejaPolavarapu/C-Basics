//Divisiblity check using only " if "
#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("Enter a number");
	scanf("%d",&a);
	b=a%1;
	c=a%2;
	d=a%3;
	e=a%4;
	f=a%5;
	g=a%6;
	h=a%7;
	i=a%8;
	j=a%9;
	if(b==0)
	{
		printf("%d is divisible by 1\n",a);		
	}
	if(c==0)
	{
		printf("%d is divisible by 2\n",a);		
	}
	if(d==0)
	{
		printf("%d is divisible by 3\n",a);		
	}
	if(e==0)
	{
		printf("%d is divisible by 4\n",a);		
	}
	if(f==0)
	{
		printf("%d is divisible by 5\n",a);		
	}
	if(g==0)
	{
		printf("%d is divisible by 6\n",a);		
	}
	if(h==0)
	{
		printf("%d is divisible by 7\n",a);		
	}
	if(i==0)
	{
		printf("%d is divisible by 8\n",a);		
	}
	if(j==0)
	{
		printf("%d is divisible by 9\n",a);		
	}
}

