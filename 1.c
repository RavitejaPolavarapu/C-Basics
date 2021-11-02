//int to float convert
/*To convert "int" into "flaot" one of the varaible should be float 
so that when we do an operation it converst into float */

#include<stdio.h>
void main()
{
	int a=30,b=12;
	
	float c=a*1.0/b; //trick to convert "int" into "flaot"
	
	printf("division of %d and %d is %f",a,b,c);
	
}
