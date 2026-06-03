/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    char c; 
    scanf("%d",&age);
    scanf(" %c",&c);
    if(age>=18 && c=='i')
    {
        printf("aligeble to vote");
    }
    else
    {
        printf("not aligeble to vote");
        
    }

    return 0;
}