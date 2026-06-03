/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add(int a, int b)
{ 
    
    a=100,b=100;
    printf("sub program a and b are =%d %d \n",a,b);
}

int main()
{
    int a=5,b=10,x;
    printf("main pg &bitandare =%d\n",a*b);
    x=add(a,b);

    return 0;
}
