#include <stdio.h>

int main(void)
{
	double n1,n2,n3,n4,n5,media; //pesos 2, 3, 4 e 1

	scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

	media = ((n1*2)+(n2*3)+(n3*4)+(n4)) / 10;

	printf("Media: %.1lf\n", media);

	if(media >= 7.0)
	{		
		printf("Aluno aprovado.\n");
	}

	else if(media >=5.0 )
	{
		printf("Aluno em exame.\n");
		
		scanf("%lf", &n5);	
		printf("Nota do exame: %.1lf\n",n5);

		if(n5 + media /2 > 5.0)
		{
			printf("Aluno aprovado.\n");
		}

		else
		{
			printf("Aluno reprovado.\n");
		}

		printf("Media final: %.1lf\n", n5 + media/2);
	}

	else 
	{
		printf("Aluno reprovado.\n");
	}

	return 0;
}