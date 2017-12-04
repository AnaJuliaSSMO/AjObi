#include <stdio.h>
int main(void)
{
	int n;

    scanf("%d", &n);
    printf ("%d! = %d\n",n,fat(n));

	return 0;
}

int fat(int n)
{
	if(n==1) 
	return 1;

	return n*fat(n-1);
}