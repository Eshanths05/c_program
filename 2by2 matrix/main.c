
#include <stdio.h>

int main()
{
    int a[2][2],b[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;i++)
        scanf("%d",&a[i],b[j]);
    }
    
    int c[2][2],d[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;i++)
        scanf("%d",&c[i],d[j]);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;i++)
        {
        printf("%d",a[i],b[j]+c[i],d[j]);
        }
        printf("\n");
    }


    return 0;
}
