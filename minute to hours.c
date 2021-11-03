//Minutes to Hours
#include<stdio.h>
void main()
{
	int m=100,h=m/60,t=m%60;
	
	/* here m/60 gives hours and m%d gives minutes which is a reminder
	
	                      60)100(1 --> /(quotient)  
					          60
							------
							  40 ---> %(Reminder)
						 	------                                    */
	
	printf("%d hour(s) and %d minute(s)",h,t);
}
