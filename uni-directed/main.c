#include <stdio.h>

int main()
{
    int n=4;
    int src,dest;
    int a[4][4]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        } printf("\n");
    }
    int edge=3;
    for(int i=0;i<edge;i++)
    {
        scanf("%d %d",&src,&dest);
        a[src][dest]=1;
        a[dest][src]=1;
    }printf("uni=directed graph\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }printf("\n");
    }
    
    
    
    return 0;
    
}