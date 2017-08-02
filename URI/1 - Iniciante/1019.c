#include <stdio.h>

int main (void)
{
	int n,hr,min,seg;

	scanf("%d", &n);

	hr = n/3600;

	min = n%3600/60;

    seg = n%60;

    printf("%d:%d:%d\n", hr,min,seg);

	return 0;
}