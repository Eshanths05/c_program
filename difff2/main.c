/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,oddref=2,evenref=0,n=6;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",evenref);
            evenref=evenref+5;
        }
        else
        {
            printf("%d\n",oddref);
            oddref=oddref+2;        }
    }
    return 0;
}
