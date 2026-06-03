/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",ar[i]);
    //for(i=0;i<n;i++)
    //printf("%d",ar[i]);
    m=ar[0];
    for(i=1; i<n;i++){
        if(m>ar[i])
        m=m;
        else
        m=ar[i];
        
    }
    printf("%d",m);


    return 0;
}
