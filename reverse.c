#include<stdio.h>
int main()
{
	int a,r,t=0;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		t=t*10+r;
		a/=10;
	}
	printf("%d",t);
}
