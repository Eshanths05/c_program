#include <stdio.h>

int main()
{
    int n,sum=15;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==sum)
        {
        printf("%d %d",a[i],a[j]);
        return 0;}
    (a[i]+a[j]<sum)?i++:j--;
    
    }
    return 0;
    
}