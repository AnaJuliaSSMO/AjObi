#include <stdio.h>

int main(void)
{
 	int i,x,n,rest;

	scanf("%d", &x);

 	for(i = 0; i < x; i++)
	{
		scanf("%d", &n);
		rest = n%2;

		if(rest == 0 && n > 0)//par e positivo
		{
			printf("EVEN POSITIVE\n");
		} 

		else if(rest == 0 && n < 0) //par e negativo
		{
			printf("EVEN NEGATIVE\n");
		}

		else if(rest != 0 && n > 0) //ímpar e positivo
		{
			printf("ODD POSITIVE\n");
		} 

		else if(rest != 0 && n < 0) //ímpar e negativo
		{
			printf("ODD NEGATIVE\n");
		} 

		else if(n == 0)
		{
			printf("NULL\n");
		} 

	}

	return 0;
}