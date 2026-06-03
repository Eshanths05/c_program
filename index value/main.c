#include <stdio.h>
#include <string.h>
int main()
{
	int i,a=0;
	char ar[100];
	char x;
	scanf("%s",ar);
	scanf(" %c",&x);
	int n=strlen(ar);
	for(int i=0; i<n; i++)
	{
		if(x==ar[i])
		{
			a=i;
			break;
		}

	}
	printf("%d",a);
	return 0;
}