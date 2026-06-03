#include <stdio.h>

int main()
{
    int a1,a2,b;
    scanf("%d%d%d",&a1,&a2,&b);
    if(b<=a1||b%a1==1||b%a1==0){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}
