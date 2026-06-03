
#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        printf("%c",a[i]);
        if(i==2||i==5) 
        {
            printf(" ");
        }
    }
    return 0;
}