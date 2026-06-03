/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0,i=0,evensum=0,oddsum=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        else if (n%2==0)
        evensum=evensum+n;
        else
        oddsum=oddsum+n;
    }
    printf("%d %d",evensum,oddsum);
    
   
    return 0;
}
