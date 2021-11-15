// Decode the three given number into output 
#include<stdio.h>
void main()
{
	/*      logic--->In AASCII small characters 
	 		        start from 95 So we need to 
			   add 95 to input number to get AASCII Char                     */	
			    
	int a,b,c,d,e,f;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	d=a+95; // if a=4,4+95=99 -->c
	e=b+95; // if b=2,2+95=97 -->a
	f=c+95; // if c=21,21+95=116 -->t
	printf("%c%c%c",d,e,f);
	//out put : cat
	
}
