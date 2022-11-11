#include <stdio.h>
#include <string.h>
#define MAX 100

void remove_caracter(char str[], char rem){
    
    int i, j, tam=strlen(str);
    printf("%d", tam);
    
    for(i=0; i<tam; i++){
        if(str[i]==rem){
            for(j=i; j<tam; j++){
                str[j]=str[j+1];
            }
        }
        tam--;
        i--;
    }
    printf("%s%d", str, tam);
}


int main()
{
    char str[MAX], ch;
    printf("Informe a string da qual gostaria de remover alguns caracteres\n");
    scanf("%[^\n]%*c", str);
    printf("Informe o caracter que gostaria de remover sucessivamente da string anteriormente informada\n");
    scanf("%c", &ch);
    remove_caracter(str, ch);
    printf("%s", str);
    return 0;
}

