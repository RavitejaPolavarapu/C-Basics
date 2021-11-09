// Reading inputs

#include<stdio.h>
void main()
{
	 
  /*      Syntex: 
          scanf("format Specifier", &variable);         */
          
	int a;
	printf("enter the side of the Sqaure :");
	scanf("%d",&a);    
	int area=a*a;
	printf("Area of square with side %d is %d",a,area);
	
}
