/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void add (int *k,int *j)
{
    *k=30;
    *j=30;
}

int main()
{
    int a=5,b=7;
      add(&a,&b);
     printf("%d",a+b);
     
    return 0;
}
