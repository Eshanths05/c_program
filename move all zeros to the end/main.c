
#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j++]=a[i];
            
        }
    }

    while(j<n)
    {
        a[j++]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
    
}