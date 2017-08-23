#include <stdio.h>

int main(void)
{

    int inicio, fim;

    scanf("%d %d",&inicio, &fim);

    if(fim<= inicio) 
    { 
    	fim += 24; //não consigo desacostumar à essa estrutura
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", fim - inicio);

    return 0;
}
