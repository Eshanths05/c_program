
#include <stdio.h>
int main()
{
   int n,s=0,c=0,t;
   scanf("%d",&n);
   while(n>0)
   {
       t=n%10;
       s=s+t;
       c++;
   }
   printf("%d\n",s/c);
   return 0;
 

    return 0;
}
