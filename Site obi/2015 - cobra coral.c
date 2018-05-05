#include <stdio.h>
int main(void)
{
	int A,B,C,D;
  
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if ( A == C || B == D ) 
    {	
    	printf("V\n");
    }

    else 
    {
    	printf("F\n");
    }
  
	return 0;
}