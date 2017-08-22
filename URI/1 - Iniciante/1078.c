#include <stdio.h>

int main(void)
{
 	int n;
	int u = 0,doi = 0,t = 0,q = 0,c = 0,s = 0,e = 0,o = 0,v = 0,d = 0;
	scanf("%d", &n);

	u = 1*n;
	doi = 2*n;
	t = 3*n;
	q = 4*n;
	c = 5*n;
	s = 6*n;
	e = 7*n;
	o = 8*n;
	v = 9*n;
	d = 10*n;

	printf("1 x %d = %d\n2 x %d = %d\n3 x %d = %d\n4 x %d = %d\n5 x %d = %d\n", n,u,n,doi,n,t,n,q,n,c);
	printf("6 x %d = %d\n7 x %d = %d\n8 x %d = %d\n9 x %d = %d\n10 x %d = %d\n",n,s,n,e,n,o,n,v,n,d);

	return 0;
}