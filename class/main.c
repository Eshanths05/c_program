/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e=a+b+c+d;
    if(e<0)
    {
        printf("A GRADE");
    }
    else if(e>0);
    {
        printf(" B GRADE");
    }
    else
    {
        printf("C GRADE");
    }  
    
    return 0;
    

}
