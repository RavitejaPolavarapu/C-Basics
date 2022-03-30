#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
    	for(i=n;i<=m;i++)
    		{
    			printf("%d ",i);   	
			}
	}
	if(n>m)
	{
		{
    	for(i=m;i<=n;i++)
    		{
    			printf("%d ",i);   	
			}
	}
	}

}
