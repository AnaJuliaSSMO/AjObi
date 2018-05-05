#include <stdio.h>

int main(void)

{
    int i = 0;
    char n[20];
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if(ch == '-')
        n[i] = '-';

        else if(ch >= 48 && ch <= 57)
        n[i] = ch;

        else if(ch >= 65 && ch <= 67)
        n[i] = '2';

        else if(ch >= 68 && ch <= 70)
        n[i] = '3';
     
        else if(ch >= 71 && ch <= 73)
        n[i] = '4';
 
        else if(ch >= 74 && ch <= 76)
        n[i] = '5';

        else if(ch >= 77 && ch <= 79)
        n[i] = '6';
     
        else if(ch >= 80 && ch <= 83)
        n[i] = '7';
 
        else if(ch >= 84 && ch <= 86)
        n[i] = '8';

        else if(ch >= 87 && ch <= 90)
        n[i] = '9';

        i++;
    }

    n[i] = '\0';
    printf("%s\n", n);

    return 0;
}
