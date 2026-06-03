/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nor,month,r;
    scanf("%d %d",&nor,&month);
    if (month==12 || month==3|| month==1)
    {
        r=nor*1300;
    }
    else
    {
        r=nor*1000;
    }
    printf("Room rent =%d",r);

    return 0;
}
