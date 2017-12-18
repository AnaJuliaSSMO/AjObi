#include <stdio.h>
#define MAX 10000
int main(void)
{
   int n,vet[MAX],help;

   printf("Quantos n. deseja ordenar?\n");
   scanf("%d", &n);


   printf("Insira os n.:\n");
   for(int i = 0; i < n; i++)
   {
   	   scanf("%d",&vet[i]);
   }

   for(int i = 0; i < n-1 ; i++)
   	{
  	  if(vet[i] > vet[i+1]) //se vetor[0] for maior que vetor[1], ent vetor[0] = vetor[1]; vetor [1] = vetor[0];
  	 	{
  	   		help = vet[i];
  	   		vet[i] = vet[i+1]; 
  	   		vet[i+1] = help;
  	    }  	   	  
   }

   for(int i = 0; i < n; i++)
   {
  	    printf("%d ",vet[i]);
   }

   return 0;
 }