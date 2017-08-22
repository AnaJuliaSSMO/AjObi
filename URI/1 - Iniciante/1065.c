#include <stdio.h>

int main(void)
{
 	int i,n,rest;

	int cont = 0;

	for(i = 0; i < 5; i++)
	{
		scanf("%d", &n);

		rest = n%2;

		if(rest == 0){cont++;}
	}

	printf("%d valores pares\n", cont);

	return 0;
}
