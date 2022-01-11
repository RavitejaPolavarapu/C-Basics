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
					printf("%d %% %d = %d",a,b,a%b);
					break;
				default:
					printf("Invalid input");
				}
			break; 
		case 2:
			printf("choose one of the following Relational Operations:\n");
			printf("1. <\n2. <=\n3. >\n4. >=\n5. ==\nEnter your choce :");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
				    if(a<b)
				    {
				        printf("%d is less than %d ",a,b);
				    }
				    else 
				    {
				        printf("%d is not less than %d",a,b);
				    }
				    break;
			    	
			    case 2:
			    	if(a<=b)
				    {
				        printf("%d is less than or equal to %d ",a,b);
				    }
				    else 
				    {
				        printf("%d is not less than or equal to %d",a,b);
				    }
				    break;
				case 3:
				    if(a>b)
				    {
				        printf("%d is greater than %d ",a,b);
				    }
				    else 
				    {
				        printf("%d is not greater than %d",a,b);
				    }
				    break;
				case 4:
				    if(a>=b)
				    {
				        printf("%d is greater than or equal to %d ",a,b);
				    }
				    else 
				    {
				        printf("%d is not greater than or equal to %d",a,b);
				    }
				    break;
				case 5:
				    if(a==b)
				    {
				        printf("%d is equal to %d ",a,b);
				    }
				    else 
				    {
				        printf("%d is not equal to %d",a,b);
				    }
				    break;
			}
			break;
		case 3:
			printf("choose one of the following Bitwise3 Operators:\n");
			printf("1. &\n2. |\n3. ^\nEnter your choice :");
			scanf("%d",&d);
			switch(d)
			{
			    case 1:
			    	printf("%d & %d is %d",a,b,a&b);
			    	break;
			    case 2:
			    	printf("%d | %d is %d",a,b,a|b);
			    	break;
			    case 3:
			    	printf("%d ^ %d is %d",a,b,a^b);
			    	break;
			    default:
			    	printf("Invalid input");
			}
			
	}
}
