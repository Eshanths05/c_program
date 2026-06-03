#include<stdio.h>
#include<string.h>
int main()
{
    char b[100];
    int v,i;
    scanf("%s",b);
    int n=strlen(b);
    for(int i=0;i<n;i+=4)
    {
        v= (b[i]-'0')*8+(b[i+1]-'0')*4+(b[i+2]-'0')*2+(b[i+3]-'0')*1;
    if(v<10)
    {
        printf("%d",v);
    }
    else    
    {
        printf("%c",v+55);
    }
    }
    return 0;
} 