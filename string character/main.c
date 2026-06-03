
#include <stdio.h>
#include <string.h>

int main()
{
    char sr[6];
    int  i=0,v=0;
    scanf("%s",sr);
    while(sr[i]!='\0')
    {
        if(sr[i]=='a'||sr[i]=='e'||sr[i]=='i'||sr[i]=='o'||sr[i]=='u')
        v++;
        i++;
    }
    
    printf("%d",v);

    return 0;
}
