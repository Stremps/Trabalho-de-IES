#include <stdio.h>
#define MAX 1000

void str_copiar(char *str1, char *str2){ //Função responsável por copiar a string do primeiro argumento para a string do segundo argumento
    
    for(; *str1; *str1++, *str2++){
        *str2=*str1;
    }
    
    
}

int main()
{
    char str1[MAX], str2[MAX];
    scanf("%[^\n]%*c", str1);
   
    str_copiar(str1, str2);
    
    printf("%s\n%s", str1, str2);
    
    return 0;
}


