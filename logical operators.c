//logical operand

/*    to compare two 
   comparision operators           */
   
#include<stdio.h>
void main()
{
	/*     && ---> logical AND
	       || ---> logical OR            */
	       
	printf("%d\n",(20<40)&&(30<60)); //both are correct ,output : true(1)
	printf("%d\n",(20<40)&&(30>60)); //one of them is wrong, output : false(0)
	printf("%d\n",(20>40)&&(30>60)); //both are wrong ,output : false(0)
	printf("%d\n",(20<40)||(30<60)); //both are correct ,output : true(1)
	printf("%d\n",(20<40)||(30>60)); // even though one of them is wrong, output : true(1)
	printf("%d\n",(20>40)||(30>60)); //both are wrong ,output : false(0)
}
