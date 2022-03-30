// No of multiple of x in given range a and b 
#include <stdio.h>

int main()
{
    int x,a,b,c=0,i;
    scanf("%d%d%d",&x,&a,&b);
    
    for(i=a;i<=b;i++)
    {
       if(i%x==0)
       {
           c=c+1;
       }
    }
    printf("%d",c);
}
