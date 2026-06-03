#include<stdio.h>
int main ()
{
	int k;
	scanf("%d",&k);
	int a[k];
	for(int i=0; i<k; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0; i<k-1; i++)
	{
		for(int j=i+1; j<k; j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	int largest=a[0];
	for(int i=0; i<k; i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
	}
	printf("%d",largest);
	return 0;
}
