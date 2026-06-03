#include<stdio.h>
int main()
{
	int n,s=0;
   y:scanf("%d",&n);
	while(n==-1)
	{
		s=n+s;
		goto y;
		break;

	}
	printf("%d",s);
	return 0;
}
