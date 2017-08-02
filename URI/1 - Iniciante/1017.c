#include <stdio.h>

int main (void)
{
	double tempo,velmed,dista,litros;

	scanf("%lf%lf", &tempo, &velmed);

	dista = tempo*velmed;

	litros = dista * (1/12.0);

	printf("%.3lf\n", litros);

	return 0;
}

