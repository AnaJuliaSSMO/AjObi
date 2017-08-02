#include <stdio.h>

int main (void)

{
	double salfixo,vendas,tot;
	char nome[100];

	scanf("%s\n", nome);
	scanf("%lf%lf", &salfixo, &vendas);

	tot = ((15*vendas)/100) + salfixo;

	printf("TOTAL = R$ %.2lf\n", tot);
	return 0;
}