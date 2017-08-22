#include <stdio.h>

int main(void)
{
	double i,n;

	int cont = 0;

	for(i = 0; i < 6; i++)
	{
		scanf("%lf", &n);

		if(n > 0){cont++;}
	}

	printf("%d valores positivos\n", cont);

	return 0;
}
