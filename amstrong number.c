#include<stdio.h>
int main()
{
	int a,n,r,s=0;
	scanf("%d",&n);
	a=n; // To store n value
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10; // at last iteration n=0;
	}
	if (a==s)
	{
		printf("Entered number is an amstrong number");
	}
	else
	{
		printf("Entered number is not an amstrong number");
	}
}
