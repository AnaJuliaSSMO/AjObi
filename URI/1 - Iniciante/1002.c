#include <stdio.h>

int main (void)
{
	double R;

	scanf("%lf", &R);

	double A = 3.14159*(R*R);

	printf("A=%.4lf\n", A);

	return 0;
}