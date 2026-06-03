#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int left=0;
    int n=strlen(a)-1;
    for(int i=n;i>0;i--)
    {
        if(a[left]!=a[i])
        {
            printf("no");
            return 0;
        }
        left++;
    }
    printf("yes");
    return 0;
}