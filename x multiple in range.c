#multiples of x in the range of a and b (including a & b)
#include <stdio.h>
int main()
{
    int x,a,b,i;
    scanf("%d%d%d",&x,&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%10==0)
        {
        printf("%d ",i);
        }
 
    }
}    
