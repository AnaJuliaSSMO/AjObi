#include <stdio.h>

int main(void)
{
	double n1,n2,fator1;
	scanf("%lf%lf", &n1, &n2);

	for(fator1 = 1; n1 > 1; n1--)
	fator1 = fator1 * n1;

	printf("%lf", fator1);
	return 0;
}