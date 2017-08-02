#include <stdio.h>

int main (void)

{
	double A,B,C,med;

	scanf("%lf%lf%lf", &A, &B, &C);

	med = ((A*2) + (B*3) + (C*5))/10;

	printf("MEDIA = %.1lf\n", med);

	return 0;
}