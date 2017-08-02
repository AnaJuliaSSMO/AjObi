#include <stdio.h>

int main (void)

{
	double num,hrs,salhrs,sal;

	scanf("%lf%lf%lf", &num, &hrs, &salhrs);

	sal = hrs*salhrs;

	printf("NUMBER = %.0lf\n", num);
	printf("SALARY = U$ %.2lf\n", sal);

	return 0;
}