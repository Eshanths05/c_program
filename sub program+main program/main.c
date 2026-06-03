/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=add(a,b);
    printf("%d",x);
    return 0;
}
