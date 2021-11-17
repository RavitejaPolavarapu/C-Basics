//Assigning operators
#include<stdio.h>
void main()
{
	int a=20,b=4;
	a+=b; // a=24 & b=4
	printf("%d %d\n",a,b);
	a-=b; // a=20 & b=4
	printf("%d %d\n",a,b);
	b*=a; // a=20 & b=80
	printf("%d %d\n",a,b);
	b/=a; // a=20 & b=4
	printf("%d %d\n",a,b);
	a%=b; // a=0 & b=4	
	printf("%d %d",a,b);
}
