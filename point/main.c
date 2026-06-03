#include<stdio.h>

void swap(int *n1)
{
    *n1=20;
}
int main()
{
    int a=10;
    swap(&a);
    printf("%d",a);
    
}
