#include <stdio.h>
int main (void)
{
	int x,y;

	scanf("%d",&x);
	y = x;
	
	for(int i = 0; x >= 0; i++)
	{
	    printf("%d ",x--);
	}
	
	x = 1;
	for(int i = 0; x <= y; i++)
	{
	  	printf("%d ",x++);
	}    
	return 0;
}