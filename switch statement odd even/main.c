/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf(" enter the no:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9: printf("odd");
        break;
        default: printf("even");
        
        
    }
    

    return 0;
}
