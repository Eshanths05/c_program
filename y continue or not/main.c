/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()

{
    char c='y';
    int a,b;
    while(c=='y'|| c=='y')
    {
        printf("Enter the 2 input:");
        scanf("%d%d",&a,&b);
        printf("addition=%d\n",a+b);
        printf("multiplication=%d",a*b);
        printf("\nwant to be continue:(y or y)");
        scanf(" %c",&c);
    
    }

    return 0;
}
