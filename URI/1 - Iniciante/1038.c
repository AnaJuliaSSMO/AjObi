#include <stdio.h>

int main(void)
{
	double n,cod,x;

	scanf("%lf",&cod);
	scanf("%lf",&n);

	if(cod == 1)
	{
		x = 4;
	}

	else if(cod == 2)
	{
		x = 4.5;
	}

	else if(cod == 3)
	{
		x = 5;
	}

	else if(cod == 4)
	{
		x = 2;
	}

	else if(cod == 5)
	{
		x = 1.5;
	}


	printf("Total: R$ %.2lf\n", n*x);

	return 0;
}