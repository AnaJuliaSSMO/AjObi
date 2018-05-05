#include <stdio.h>
int main()
{	
	int hi,mi,si;
	int hf,mf,sf;
	int di,df;

	scanf("Dia %d",&di);
	scanf("%d : %d : %d\n",&hi,&mi,&si);

	scanf("Dia %d",&df);
	scanf("%d : %d : %d",&hf,&mf,&sf);

	si = sf - si;
	mi = mf - mi;
	hi = hf - hi;
	di = df - di;

	if(si < 0)
	{
		si += 60;
		mi--;
	}

	if(mi < 0)
	{
		mi += 60;
		hi--;
	}

	if(hi < 0)
	{
		hi += 24;
		di--;
	}

    printf("%d dia(s)\n", di);
    printf("%d hora(s)\n", hi);
    printf("%d minuto(s)\n", mi);
    printf("%d segundo(s)\n", si);

	return 0;
}