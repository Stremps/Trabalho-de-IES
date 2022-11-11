#include <stdio.h>
#include <ctype.h>
#define MAX 100

char* addr_space(char *str){//Retorna o endereço hexadecimal do primeiro espaço em branco encontrado na string
    for(; *str; *str++){
        if(isspace(*str)){
        printf("%p", str);
        break;
        }
    }
}

int main()
{
    char str[MAX];
    printf("Forneça a string\n");
    scanf("%[^\n]%*c", str);
    addr_space(str);
    return 0;
}

