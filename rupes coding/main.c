/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<100)
    {
        printf("Invallid");
    }
    else{
        int b,c,d,e,f,g;
        b=a/500;
        c=a%500;
        printf(" how many 500 we get:%d\n",b);
        d=c/200;
        e=c%200;
        printf("how many 200 we get:%d\n",d);
        f=e/100;
        g=e/100;
        printf("how many 100 we get:%d\n",f);
        int total = b/d/f;
        printf("%d",total);
        
        
        
    }
    

    return 0;
}