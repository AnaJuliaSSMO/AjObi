#include <stdio.h>

int main(void)
{
   int fib;
   int n = 0,n1 = 1,n2 = 1;
   while (n >= 0 && fib >= 0) //ELE SEMPRE PASSA DE 0, ERA PRA IR ATÉ O 46 E ELE VAI ATÉ O 47 AAAAAAAAAAAA
   {
      n++;     
      if(n == 1	) 
      {
         printf("fib(%d) = %d\n",n,n);
      }

      else if(n == 2)
	  {
         printf("fib(%d) = %d\n",n,n-1);
      }

      else 
      {
         for (int i = 3; i <= n; i++)
         {
            fib = n1+n2;
            n1=n2;
            n2=fib;
         }

         printf("fib(%d) = %d\n",n, fib);

         n1 = 1;
         n2 = 1;
      }
   }    
   return 0;
}