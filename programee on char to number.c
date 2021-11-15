#include<stdio.h>
void main()
{
	char a,b,c,d,e,f;
	printf("Enter any three small characters: ");
	scanf("%c%c%c",&a,&b,&c);
	d=a-95;
	e=b-95;
	f=c-95;
	printf("%d %d %d",d,e,f);
}
