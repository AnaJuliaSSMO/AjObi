#include <stdio.h>

int main(void)
{
    int n,a;

    scanf("%d",&n);

    for(a=2;a<=10000;a=a+n)
    {
    	printf ("%d\n",a);
    } 

    return 0;
}