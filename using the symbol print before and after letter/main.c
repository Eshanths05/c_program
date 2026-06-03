
#include <stdio.h>
#include <math.h>

int main()
{
    char a[100]="edfghjklpo$iuty";
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]=='$')
    {
    int t=i-1;
    int h=i+1;
    printf("%c  %c\n",a[t],a[h]);
    break;
}
i++;
}

return 0;
}
