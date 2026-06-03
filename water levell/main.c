#include <stdio.h>
#include <unistd.h>

int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    printf("water levell in (lower levell)=%d\n",a);
    printf("water levell in (upper levell)=%d\n",b);
    if(a>=30&&b<=95)
    {
        printf("start the motor\n");
    }

        while(a>=20&&b<=95)
        {
            a--;
            b++;
            printf("%d:%d\n",a,b);
           sleep(1);
        }

    if(a<=20 || b>=95)
    {
        printf("motor off");
    
        
    }
    if(a>100&&b>100)
    {
        printf("tank overflow");
        
        
        
        
        
    }
    

}