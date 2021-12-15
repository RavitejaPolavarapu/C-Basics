//Switch 
//month number to month name
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a month number");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("%d - January",a);
			break; 
		case 2:
			printf("%d - Febraury",a);
			break;
		case 3:
			printf("%d - March",a);
			break;
		case 4:
			printf("%d - April",a);
			break;
		case 5:
			printf("%d - May",a);
			break;	
		case 6:
			printf("%d - June",a);
			break;
		case 7:
			printf("%d - July",a);
			break;
		case 8:
			printf("%d - August",a);
			break;	
		case 9:
			printf("%d - September",a);
			break; 
		case 10:
			printf("%d - October",a);
			break; 
		case 11:
			printf("%d - November",a);
			break;
		case 12:
			printf("%d - December",a);
			break;
		default:
		printf("invalid input");		
	}
}
