#include <stdio.h>

int main(void)
{
	int cod,a = 0,g = 0,d = 0; //alcool,gasolina,diesel,fim

	do
	{
		scanf("%d",&cod);

		if(cod == 1)
		{
			a++;
		}

		else if(cod == 2)
		{
			g++;
		}

		else if(cod == 3)
		{
			d++;
		}
	}
	while(cod != 4);

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
	
	return 0;
}