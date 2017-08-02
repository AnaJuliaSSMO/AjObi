#include <stdio.h>

int main (void)

{
	int A,B,C,D,dif;

	scanf("%d%d%d%d", &A, &B, &C, &D);

	dif = (A * B) - (C * D);

	printf("DIFERENCA = %d\n", dif);

	return 0;
}