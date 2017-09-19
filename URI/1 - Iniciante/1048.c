#include <stdio.h> 

int main(void)
{
	double sal,novosal,rjt;
	int bonus;

	scanf("%lf", &sal);

	if(sal <= 400)
	{
		bonus = 15;
		novosal = sal + ((sal*15)/100);
		rjt = novosal - sal;
	}

	else if(sal <= 800)
	{
		bonus = 12;
		novosal = sal + ((sal*12)/100);
		rjt = novosal - sal;
	}

	else if(sal <= 1200)
	{
		bonus = 10;
		novosal = sal + ((sal*10)/100);
		rjt = novosal - sal;
	}

	else if(sal <= 2000)
	{
		bonus = 7;
		novosal = sal + ((sal*7)/100);
		rjt = novosal - sal;
	}

	else 
	{
		bonus = 4;
		novosal = sal + ((sal*4)/100);
		rjt = novosal - sal;
	}

	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novosal,rjt,bonus);

	return 0;
}
