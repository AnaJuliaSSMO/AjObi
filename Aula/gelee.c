#include <stdio.h>
#define max 10000

int main()
{
	int a[max];
	int i,e = 0,n;

	printf("Quantidade de num. que vc quer:");
	scanf("%d",&n);

	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0; i < 4; i++)
	{
		if(a[i] > a[i-1])
		{
			e = a[i];
		}
	}

	printf("O maior valor eh: %d",e);

	return 0;
}