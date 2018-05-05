#include <stdio.h>

int main(void) 
{
	int n, i,D,X,dar = 0, xer = 0;

	scanf ("%d", &n);

	for(i = 0; i<n; i++)
	{
		scanf("%d %d", &D, &X);
		
		if((D + 1) % 5 == X || (D + 2) % 5 == X)
		{
			dar++;
		}

		else 
		{
			xer++;
		}
	}

	if(dar > xer)
	{
		printf("dario");
	}

	else
	{
		printf("xerxes");
	}

	return 0;
}