#include<stdio.h>
int main()
{
    int n,j=0,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[50];
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j++]=a[i];
        }
        
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[j++]=a[i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}