//integer Family
#include<stdio.h>
void main()
{
	//below ranges with different compilers
	
	//short int
	signed short int a =-26561 ,b=3450; //range of short int= -37768 to 32767 (-2^15 to (2^15)-1)
	unsigned short int c=9110; //range of short int= 0 to 65535 (0 to (2^16)-1)
	
	//int
	signed int d =-6161165 ,e=861615; //range of int= -2147483648 to 2147483648 (-2^31 to (2^31)-1)
	unsigned int f=6916114;  //range of int= 0 to 4294967295 (0 to (2^32)-1)
	
	//long int
	signed long int g=-746114156 ,h=21165143; //range of long int= -2147483648 to 2147483648 (-2^31 to (2^31)-1)
	unsigned long int i=51456146; //range of long int= 0 to 4294967295 (0 to (2^32)-1)
	
	//long long int
	signed long long int j=-514564156161 ,k=71161614546; //range of long long int= (-2^63 to (2^63)-1)
	unsigned long long int l=825614156132;  //range of long long int= (0 to (2^64)-1)
	
	//out put
	
	printf("signed short int is %hd & %hd\n",a,b); // for signed short int ----> %hd or %hi
	printf("unsigned short int is %hu\n",c); // for unsigned short int ----> %hu 
	
	printf("signed int is %d & %d\n",d,e); // for signed int ----> %d or %i
	printf("unsigned int is %u\n",f); // for unsigned int ----> %u 
	
	printf("signed long int is %ld & %ld\n",g,h); // for signed long int ----> %ld or %li
	printf("unsigned long int is %lu\n",i); // for unsigned long int ----> %lu 
	
	printf("signed long long int is %lld & %lld\n",j,k); // for signed long long int ----> %lld or %lli
	printf("unsigned long long int is %llu",l); // for unsigned long long int ----> %llu 

}
