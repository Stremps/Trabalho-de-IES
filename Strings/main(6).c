#include <stdio.h>
#include <ctype.h>
#define MAX 100

int space_count(char *str){ //Conta a quantidade de espaços existentes em uma string passada como parâmetro
    int contador=0;
    for(; *str; *str++){  //Percorre a string
    if(isspace(*str) && *str+1!='\0')
    contador++;
    }
    
    return contador;
}

int main()
{
    char str[MAX];
    scanf("%[^\n]%*c", str);
    printf("A quantidade de espaços é: %d\n", space_count(str));
    return 0;
}



