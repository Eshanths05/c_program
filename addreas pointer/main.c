/******************************************************************************


*******************************************************************************/
#include <stdio.h>

void print(int *ptr ,int t)
{
    for(int k=0;k<t;k++)
    printf("%d ",*(ptr+k));
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    print(&arr[0],n);
    
    
       

    return 0;
}
