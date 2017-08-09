#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[1000];
    scanf("%[^\n]%*c", frase);
    int i,cont = 0;

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
          cont++;
        }
     }

     printf("%d\n", cont);
    return 0;
}


