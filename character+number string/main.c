#include <stdio.h>
#include <string.h>
int main()
{
int i,x=0,n;
char sr[12];
scanf("%s",sr);
for(i=0;sr[i]!='\0';i++)
{
    if (sr[i]>='1'&&sr[i]<='9')
    {
        n=sr[i]-'0';
        x=x+n;
    }
}
    printf("%d",x);

return 0;
}