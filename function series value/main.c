#include<stdio.h>
void feb(int a,int b,int n)
{
int i;
printf("%d%d",a,b);
for(int i=0;i<n-2;i++)
{
int c=a+b;
printf("%d",c);
a=b;
b=c;
}

}
int main()
{
int a=1,b=1,n=4;
feb(a,b,n);
feb(2,3,5);

}
