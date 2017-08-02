#include <stdio.h>

int main (void)
{
	double km,litros,consumo;

	scanf("%lf%lf", &km, &litros);

	consumo = km/litros;

	printf("%.3lf km/l\n", consumo);

	return 0;
}

