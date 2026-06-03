#include <stdio.h>

int main() {
    int ldr;

    for (int i = 0; i < 4; i++) 
    {   
        printf("Enter LDR value: ");
        scanf("%d", &ldr);

        if (ldr <=15) 
        {
            printf("room 1\n");
            printf("Light ON\n");
            printf("Fan OFF\n");
        } 
        else if(ldr>=15)
        {
            printf("room1\n");
            printf("Light OFF\n");
            printf("Fan ON\n");
        }
        if (ldr <=15) 
        {
            printf("room2\n");
            printf("Light ON\n");
            printf("Fan OFF\n");
        } 
        else  
        {
            printf("room2\n");
            printf("Light OFF\n");
            printf("Fan ON\n");
        }
    printf("\n");
    }
    return 0;
}
