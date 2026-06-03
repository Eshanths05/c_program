#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],pos[50],neg[50];
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            pos[x++]=a[i];
        }
        else
        {
            neg[y++]=a[i];
        }
    }
    int i=0,m=0,k=0;
    while(m<x&&k<y)
    {
        a[i++]=pos[m++];
        a[i++]=neg[k++];
    }
    while(m<x)
    {
        a[i++]=pos[m++];
    }
    while(k<y)
    {
        a[i++]=neg[k++];
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}
