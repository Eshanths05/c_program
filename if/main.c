/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter 4 markes\n: ");
    scanf("%d %d %d %d ",&a,&b,&c,&d);
    if(a>=90)
    {
        printf("GRADE A\n");
    }
    else if (b>=75)
    {
        printf("GRADE B\n");
    }
    else if (c>=50)
    {
        printf("GRADE C\n");
    }
    else{
        printf("FAIL\n");
    }

    return 0;
}