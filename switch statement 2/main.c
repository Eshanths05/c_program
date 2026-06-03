/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    char c;
    int a,b;
    printf("enter the 2 number");
    scanf("%d %d",&a,&b);
    printf("\n enter the operator +,-,*,/ \n");
    scanf(" %c",&c);
    switch(c)
    {
        case'+': printf("%d",a+b);
        break;
        case'-': printf("%d",a-b);
        break;
        case'*': printf("%d",a*b);
        break;
        case'/': printf("%d",a/b);
        break;
        default: printf("the out put is Invalid");
        break;
        
        
    }


    return 0;
}
