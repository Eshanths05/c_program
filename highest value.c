#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    printf("highest value is %d\n",c);
    return 0;
    
}

