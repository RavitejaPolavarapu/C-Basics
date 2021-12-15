
#include<stdio.h>
void main()
{ 		
	int c,d;
	int a,b;
	printf("enter any two numbers :");
	scanf("%d%d",&a,&b);
	printf("Choose one of the following options\n");
	printf("1.Arthametic Operatoration\n2.Relational Operatoration\n3.Bitwise Operatoration\nEnter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Choose one of the following Arthemetic Operations\n");
			printf("1. +\n2. -\n3. *\n4. \\ \n5. %%\nEnter your choice :");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					printf("%d + %d = %d",a,b,a+b);
					break;
				case 2:
					printf("%d - %d = %d",a,b,a-b);
					break;
				case 3:
					printf("%d * %d = %d",a,b,a*b);
					break;
				case 4:
					printf("%d \\ %d = %d",a,b,a/b);
					break;
				case 5:
					printf("%d \% %d = %d",a,b,a%b);
					break;
				default:
					printf("Invalid input");
				}
			break; 
		case 2:
			printf("choose one of the following Relational Operations");
			printf("1. <\n2. <=\n3. >\n4. >=\n5. ==\n6. !=\nEnter your choce :");
			scanf("%d",&d);
			switch(d)
			{
				case 1
			}
			break;
		case 3:
			printf("%d - March",a);
			break;
			
	}
}
