
#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    scanf("%s",a);
    int n=strlen(a);
    int i;
    char min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    while(n!=0)
    {
        printf("%c",min);
        n--;
    }

    return 0;
}
