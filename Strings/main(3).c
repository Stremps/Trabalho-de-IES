#include <stdio.h>
#define MAX 1000

void inverte_stringR(char *str)//Função recursiva responsável por printar a string invertida
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}

int main()
{
    char str[MAX];
    scanf("%[^\n]%*c", str);
    printf("%s", str);
    inverte_stringR(str);
    
    return 0;
}

