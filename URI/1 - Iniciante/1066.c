#include <stdio.h>
 #include <stdio.h>

int main(void)
{
 	int i,n,rest;

	int contpar = 0, contim = 0, contpos = 0, contneg = 0;

	for(i = 0; i < 5; i++)
	{
		scanf("%d", &n);

		rest = n%2;

		if(rest == 0){contpar++;}
		else{contim++;}

		if(n > 0){contpos++;}
		else if(n < 0 && n != 0){contneg++;}
	}

	printf("%d valor(es) par(es)\n", contpar);
	printf("%d valor(es) impar(es)\n", contim);
	printf("%d valor(es) positivo(s)\n", contpos);
	printf("%d valor(es) negativo(s)\n", contneg);

	return 0;
}