#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    /*for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }*/
    for(int i=0;i<n/2;i++)
    {
        printf("%d",a[i]);
    }
    for(int i=n-1;i>=n/2;i--)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}