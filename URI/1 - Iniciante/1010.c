#include <stdio.h>

int main (void)

{
	double cod1,uni1,pre1,cod2,uni2,pre2,pagar;

	 scanf("%lf%lf%lf", &cod1, &uni1, &pre1);
	 scanf("%lf%lf%lf", &cod2, &uni2, &pre2);

	pagar = (pre1 * uni1) + (pre2 * uni2);

	printf("VALOR A PAGAR: R$ %.2lf\n", pagar);

	return 0;
}