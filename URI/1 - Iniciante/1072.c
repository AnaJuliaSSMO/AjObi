#include <stdio.h>

int main(void)
{
    int i,n,contin = 0,contout = 0,nu;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
    	scanf("%d",&nu);

    	if(nu >= 10 && nu <= 20)
    	{
    		contin++;
    	}

    	else 
    	{
    		contout++;
    	}
    }
	
	printf("%d in\n%d out\n",contin,contout);

    return 0;
}