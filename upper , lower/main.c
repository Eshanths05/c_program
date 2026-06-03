/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
     printf("%d",a-96);
    }
    else
    {
        printf("%d",a-64);
    }

    return 0;
}