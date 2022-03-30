// Sum of numer in a given range
#include<stdio.h>
int main()
{
    int n,m,a,d,s,i;
    scanf("%d%d",&n,&m);
    
     /*
		s=0;
	 	for(i=n;i<=m;i++)
    		{
        		s=s+i;
    		} 				*/
    
    d=(m-n)+1;
    a=(m+n)/2;
    s=a*d;
    printf("%d",s); 
	

}
