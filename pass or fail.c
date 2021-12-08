//check weather Pass or Fail 
#include<stdio.h>
void main()
{
	int a,b,c,d,e,t,p;
	printf("Enter the marks obtained in Maths,Eng,Phys,Che,CS : ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	t=a+b+c+d+e;
	p=t/5;
	if(a>=35 && b>=35 && c>=35 && d>=35 && e>=35)
	{
		printf("Pass\n");
		printf("Total marks out of 500: %d\n",t);
		printf("Percentage: %d\n",p);
		printf("Grade: ");
		if(p>=90)
		{
			printf("A");
		}
		else if (p>=80)
		{
			printf("B");
		}
		else if (p>=70)
		{
			printf("C");
		}
		else if (p>=60)
		{
			printf("D");
		}
		else
		{
			printf("E");
		}
	}
	else 
	{
		printf("Fail\n");
		printf("Total marks out of 500: %d\n",t);
		printf("Percentage: %d\n",p);
	}
		
}
