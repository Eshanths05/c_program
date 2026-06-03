/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&ar[i]);
    s=s+ar[i];
        
    }
    printf("%d",s); 

    return 0;
}