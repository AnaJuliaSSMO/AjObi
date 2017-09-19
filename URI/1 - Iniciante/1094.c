#include <stdio.h> 

int main(void)
{
    int i,n,num,coelhos = 0,ratos = 0,sapos = 0,cobaia;
    double porcoe,porrat,porsap;
    char tipo[2];

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d%s",&num,tipo);

        if(tipo[0]=='C')
        {
        	coelhos += num;
        }

        else if(tipo[0]=='R') 
        {
        	ratos += num;
        }

        else if(tipo[0]=='S') 
        {
        	sapos += num;
        }
    }

    cobaia = coelhos + ratos + sapos;

    porcoe = (coelhos/(cobaia*1.0))*100.00;
    porrat = (ratos/(cobaia*1.0))*100.00;
    porsap = (sapos/(cobaia*1.0))*100.00;

    printf("Total: %d cobaias\n",cobaia);
    printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
    printf("Total de sapos: %d\n",sapos);
    printf("Percentual de coelhos: %.2lf %%\n",porcoe);
    printf("Percentual de ratos: %.2lf %%\n",porrat);
    printf("Percentual de sapos: %.2lf %%\n",porsap);
    return 0;
}