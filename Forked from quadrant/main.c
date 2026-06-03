/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x > 0 && y > 0)
    {
        printf("%d,%d first Quadrant \n", x, y);
    } 
    else if (x < 0 && y > 0) 
    {
        printf(" %d,%d second Quadrant\n", x, y);
    } 
    else if (x < 0 && y < 0) 
    {
        printf("%d, %d third Quadrant \n", x, y);
    } 
    else if (x > 0 && y < 0) 
    {
        printf("%d, %d fourth Quadrant\n", x, y);
    } 
    else if (x == 0 && y == 0) 
    {
        printf("%d, %d the Origin\n", x, y);
    } 
    else if (x == 0) 
    {
        printf("The point (%d, %d) lies on the Y-Axis.\n", x, y);
    } 
    else
    { 
        printf("The point (%d, %d) lies on the X-Axis.\n", x, y);
    }

    return 0;
}