#include<stdio.h>
void main()
{
	int a=10,b=4,c=3;
	a+=b; // 14 4 3
	b-=c; // 14 1 3
	c*=a; // 14 1 42
	a/=b; // 14 1 42
	b*=c; // 14 42 42
	a+=b; // 56 42 42
	printf("%d %d %d",a,b,c);
	
}
