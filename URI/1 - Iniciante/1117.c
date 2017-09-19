#include <stdio.h>

int main(void)
{
	double nota, contvalido = 0, media,save = 0;

	while (1)
	{
		scanf("%lf", &nota);

		if(nota >= 0 && nota <= 10)
		{
			contvalido++;
			save += nota ;
		}

		else 
		{
			printf("nota invalida\n");
		}

		if (contvalido == 2)
		{
			break;
		}
	}

	media = save/2.0;

    printf("media = %.2lf\n", media);

	return 0;
}