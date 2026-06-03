/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a[5]={10,20,60,50,99 };
	printf("Stack The string\n");
	for(i=0; i<=5; i++)
		printf("%d\n",a[i]);

	printf("\nheep storing");
	int x=5;
	int *ptr;
	ptr=(int *)malloc(x*sizeof(int));
	for(i=0; i<=x; i++)
		scanf("%d",ptr+i);
	for(i=0; i<x; i++)
		printf(" %d",*ptr+i);
	free(ptr);

	return 0;
}