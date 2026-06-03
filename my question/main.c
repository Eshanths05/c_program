#include <stdio.h>

int main()
{
    int n,max;
    int i;
    scanf("%d",&n);
    int arr[n];
    int*ptr;
    for(int i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
    }
    ptr=arr;
    max=*ptr;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
        {
            max=(*(ptr+i));
        }
        
    }
    while(n!=0)
    {
        printf("%c",max);
        n--;
    }
    

    return 0;
}