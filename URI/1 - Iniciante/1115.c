#include <stdio.h>

int main(void)
{
    int x,y;

    do
    {
    	scanf("%d%d",&x, &y);

    	if(x > 0 && y > 0) //x,y positivos
    	printf("primeiro\n");

    	else if(x > 0 && y < 0) //x positivo,y negativo
    	printf("quarto\n");

    	else if(x < 0 && y < 0) //x,y negativos
    	printf("terceiro\n");

    	else if(x < 0 && y > 0) //x negativo,y positivo
    	printf("segundo\n");
    }

    while(x != 0 || y != 0);

    return 0;
}
