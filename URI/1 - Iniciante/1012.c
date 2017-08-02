#include <stdio.h>

int main (void)
 
{
	double A,B,C,artri,arci,artrap,arqua,arret;

	scanf("%lf%lf%lf", &A, &B, &C);

	artri = (A*C)/2;

	arci = 3.14159*(C*C);

	artrap = ((A+B)*C)/2;

	arqua = B*B;

	arret = A*B;

	printf("TRIANGULO: %.3lf\n", artri);

	printf("CIRCULO: %.3lf\n", arci);

	printf("TRAPEZIO: %.3lf\n", artrap);

	printf("QUADRADO: %.3lf\n", arqua);

	printf("RETANGULO: %.3lf\n", arret);

	return 0;
}
