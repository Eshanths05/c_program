
#include <stdio.h>

int main()
{
    FILE *f1;
    int i,n;
    scanf("%d",&n);
    f1=fopen ("multipli.txt","x");
    for (i=1;i<=100;i++)
    {
        int t=i*n;
        fprintf("%d X %d =%d\n",i,n,t);
    }
    fclose(f1);

    return 0;
}
