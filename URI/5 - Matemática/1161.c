#include <stdio.h>

int main (void)
{
	int m,n,i,j;
	double result;

	scanf("%d%d", &m,&n);

	for(i = 1; m > 1; m--)
	{
		i *= m;
	}

	for(j = 1; n > 1; n--)
	{
		j *= n;
	}

	result = i + j;

	printf("%.0lf\n", result);

	return 0;

}