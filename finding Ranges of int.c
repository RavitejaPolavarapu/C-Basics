//Finding ranges of int family in compilers

#include<stdio.h>
#include<limits.h> // all limits in this header file
void main()
{
	/*use appropiate format specifiers for every it family 
	  such as for short int --->signed %hd or %hi
	                            unsigned %hu */
	printf("Ranges of Integer Family:\n\n");                           
	//Short int
	printf("Short int:\nsigned: %hd & %hd\n",SHRT_MIN,SHRT_MAX); 
	printf("un signed: %d & %hu\n\n",0,USHRT_MAX);  //for unsigned there is no certain code for upper limit
	
	//int	
	printf("int:\nsigned: %d & %d\n",INT_MIN,INT_MAX);
	printf("un signed: %d & %u\n\n",0,UINT_MAX);
	
	//long in
	printf("long int:\nsigned: %ld & %ld\n",LONG_MIN,LONG_MAX);
	printf("un signed: %d & %lu\n\n",0,ULONG_MAX);
	
	
	//long long int
	/*In some online compilers & another code for 
	Long long int ---> Signed : LLONG_MIN , LLONG_MAX & Unsigned: ULLONG_MAX */
	
	printf("long long int:\nsigned: %lld & %lld\n",LONG_LONG_MIN,LONG_LONG_MAX); 
	printf("un signed: %d & %llu\n\n",0,ULONG_LONG_MAX);
	
}
