#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    int pos=1;
    for(int i=n-1;i>0;i--)
    {
        if(a[i]=='1')
        {
            printf("%d",pos);
            return 0;
        }
        pos++;
    }
    printf("-1");
    return 0;
}