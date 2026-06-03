/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    printf("highest value is %d\n",c);
    return 0;
    
}

