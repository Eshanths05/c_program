/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if (a== 'a' || a == 'e' || a == 'i' || a== 'o' || a == 'u')
    {
        printf("vowels");
    }
    else
    {
        printf("constant");
    }

    return 0;
}
